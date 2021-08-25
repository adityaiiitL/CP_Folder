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
#define endl '\n'
void solve(){

    lli n;
    cin>>n;
    vector<lli>v(n),ans;
    f(i,0,n)cin>>v[i];
    stack<lli>s;
    for(lli i=n-1;i>=0;i--){

        bool flag=false;
        while(s.size()!=0){

            if(s.top()<v[i]){
                ans.push_back(s.top());
                s.push(v[i]);
                flag=true;
                break;
            }
            else{
                s.pop();
            }
        }
        if(!flag){
            ans.push_back(-1);
            s.push(v[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    f(i,0,n)cout<<ans[i]<<" ";
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}