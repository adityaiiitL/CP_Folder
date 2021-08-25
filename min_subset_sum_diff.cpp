#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define intmax 2147483647
#define intmin -2147483648
#define mdl 1000000007
#define mdl2 998244353
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

// Minimise the sub set difference of two subsets:

void solve(){

    lli n;
    cin>>n;
    vec v(n);
    in(v);
    lli range=0;
    // Calculating sum of whole array:
    f(i,0,n)range+=v[i];
    bool dp[n+1][range+1];
    // creating dp matrix for subsets sum upto range:
    f(i,0,n+1){

        f(j,0,range+1){

            if(i==0&&j==0)dp[i][j]=1;
            else if(i==0)dp[i][j]=0;
            else if(j==0)dp[i][j]=1;
        }
    }
    f(i,1,n+1){

        f(j,1,range+1){

            if(v[i-1]<=j){

                dp[i][j]=dp[i-1][j-v[i-1]]|dp[i-1][j];
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    // for last row of dp matrix, iterating and finding out which sums are possible to be made from the given array:
    vec temp;
    f(i,0,range/2+1){

        if(dp[n][i])temp.pb(i);
    }
    // expression--> Min(s2-s1) becomes Min(range-s1-s1)--> min(range-2*s1):
    lli mn=intmax;
    f(i,0,temp.size()){

        mn=min(mn,abs(range-2*temp[i]));
    }
    cout<<mn<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}