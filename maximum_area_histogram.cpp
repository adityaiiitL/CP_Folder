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

    lli n;
    cin>>n;
    vec v(n),nsr,nsl;
    in(v);
    nsl.push_back(-1);
    stk s;
    s.push(0);
    f(i,1,n){

        bool flag=false;
        while(s.size()!=0){
            if(v[s.top()]<v[i]){
                nsl.push_back(s.top());
                flag=true;
                s.push(i);
                break;
            }
            else{
                s.pop();
            }
        }
        if(!flag){
            nsl.push_back(-1);
            s.push(i);
        }
    }
    stk s1;
    s1.push(n-1);
    nsr.push_back(n);
    fr(i,n-1,0){

        bool flag=false;
        while(s1.size()!=0){
            if(v[s1.top()]<v[i]){
                nsr.push_back(s1.top());
                flag=true;
                s1.push(i);
                break;
            }
            else{
                s1.pop();
            }
        }
        if(!flag){
            nsr.push_back(n);
            s1.push(i);
        }
    }
    reverse(nsr.begin(),nsr.end());
    lli mx=INT_MIN;
    f(i,0,n){

        mx=max(mx,(nsr[i]-nsl[i]-1)*v[i]);
    }
    cout<<mx<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}