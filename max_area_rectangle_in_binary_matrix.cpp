#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define lli long long int
#define ld long double
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'
void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}
void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}
void solve(){

    lli n,m,area=INT_MIN;
    cin>>n>>m;
    lli a[n][m];
    f(i,0,n){
        f(j,0,m)cin>>a[i][j];
    }
    vec v(m);
    f(i,0,n){

        f(j,0,m){
            v[j]+=a[i][j];
            if(a[i][j]==0){
                v[j]=0;
            }
        }
        vec nsl,nsr;
        stk s1,s2;
        // NSL-step
        f(j,0,m){

            bool flag=false;
            while(s1.size()!=0){

                if(v[s1.top()]<v[j]){
                    nsl.pb(s1.top());
                    flag=true;
                    s1.push(j);
                    break;
                }
                else{
                    s1.pop();
                }
            }
            if(!flag){
                s1.push(j);
                nsl.pb(-1);
            }
        }
        // NSR-step
        fr(j,m-1,0){

        bool flag=false;
        while(s2.size()!=0){

            if(v[s2.top()]<v[j]){
                nsr.pb(s2.top());
                flag=true;
                s2.push(j);
                break;
            }
            else{
                s2.pop();
            }
        }
        if(!flag){
            s2.push(j);
            nsr.pb(m);
        }
    }
    reverse(nsr.begin(),nsr.end());
    lli mx=INT_MIN;
    f(j,0,m){
        mx=max(mx,v[j]*(nsr[j]-nsl[j]-1));
    }
    area=max(area,mx);
    }
    cout<<area<<endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}