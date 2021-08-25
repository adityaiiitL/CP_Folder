#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
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
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    f(a,1,t+1){
       lli n;
    ld k;
    cin>>n>>k;
    vec v(n);
    in(v);
    sort(v.begin(),v.end());
    map m;
    f(i,0,n){
        m[v[i]]++;
    }
    vec ans;
    f(i,1,k+1){
        if(m[i]==0)ans.pb(i);
    }
    if(ans.size()==0){
        cout<<"Case #"<<a<<": 0.0"<<endl;
        continue;
    }
    // out(ans);
    ld mx=-1;
    f(i,0,ans.size()-1){

        f(j,i+1,ans.size()){

            ld temp=0;
            f(l,1,k+1){

                lli minDis=INT_MAX;
                f(m,0,v.size()){
                    minDis=min(minDis,abs(l-v[m]));
                }
                if(minDis>abs(ans[i]-l)||minDis>abs(ans[j]-l))temp++;
            }
            mx=max(mx,temp);
        }
    }
    if(mx==-1)cout<<"Case #"<<a<<": "<<1/k<<endl;
    else cout<<"Case #"<<a<<": "<<(mx/k)<<endl;
    }
    return 0;
}