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
    vec v(n),ans;
    in(v);
    stk s;
    ans.push_back(1);
    s.push(0);
    f(i,1,n){

        bool flag=false;
        while(s.size()!=0){

            if(v[s.top()]>v[i]){
                ans.push_back(i-s.top());
                s.push(i);
                flag=true;
                break;
            }
            else{
                s.pop();
            }
        }
        if(!flag){
            ans.push_back(i+1);
            s.push(i);
        }
    }
    out(ans);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}