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
    vector<lli>v(n);
    f(i,0,n)cin>>v[i];
    stack<lli>s;
    s.push(v[n-1]);
    lli mx=INT_MIN;
    for(lli i=n-2;i>=0;i--){

        bool flag=false;
        while(s.size()!=0){

            if(s.top()<v[i]){

                lli temp=v[i]^s.top();
                mx=max(mx,temp);
                s.push(v[i]);
                flag=true;
                break;
            }else{
                s.pop();
            }            
        }
        if(!flag){

            s.push(v[i]);
        }
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