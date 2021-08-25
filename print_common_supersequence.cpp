// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mdl 1000000007
#define mdl2 998244353
#define fo return
#define li long int
#define ld long double
#define lli long long int
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define mp(a,b) make_pair(a,b)
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

    string x,y;
    cin>>x>>y;
    lli n=x.size(),m=y.size();
    lli dp[n+1][m+1];
    f(i,0,n+1){
        f(j,0,m+1)if(i==0 or j==0)dp[i][j]=0;
    }
    f(i,1,n+1){
        f(j,1,m+1){
            if(x[i-1]==y[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    lli i=n,j=m;
    string ans;
    while(i>0 and j>0){

        if(x[i-1]==y[j-1]){
            ans.pb(x[i-1]);
            i--,j--;
        }
        else{

            if(dp[i-1][j]>dp[i][j-1]){
                ans.pb(x[i-1]);
                i--;
            }
            else{
                ans.pb(y[j-1]);
                j--;
            }
        }
    }
    while(i>0){
        ans.pb(x[i-1]);
        i--;
    }
    while(j>0){
        ans.pb(y[j-1]);
        j--;
    }
    reverse(all(ans));
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    fo 0;
}