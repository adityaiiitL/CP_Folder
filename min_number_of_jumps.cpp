#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
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

int a[1000000];
int dp[1000000];
int func(int n,int i){

    if(n==0||1)return 1;
    if(a[n-i-1]>=i){

        return min(1+func(n-i-1,i),func(n-i-2,i));
    }
    else{

        return func(n-i-2,i);
    }
    // if(i==n||n==0)return 0;
    // lli temp1=1+func(n-1,1);
    // lli temp2=1+func(n-2,1);
    // return min(temp1,temp2);
    // if(a[n-i-1]>=i){

    //      return min(1+func(n-i,1),func(n,i+1));
    //  }
    //  else return func(n,i+1);
}
void solve(){

    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    map m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0)m[i]++;
    }
    // int c=0;
    // for(int i=0;i<n;i++){

    //     if(i==n-1)break;
    //     i+=a[i];
        
    //     c++;
    //     i--;
    // }
    // cout<<c<<endl;
    cout<<func(n,1)<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}