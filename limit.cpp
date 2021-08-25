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
#define gsort(x) sort(all(x),greater<lli>())
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define gcd __gcd
#define endl '\n'
#define br cout<<endl
#define nah cout<<"NO"<<endl
#define yeah cout<<"YES"<<endl

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}

void solve(){

    lli n,m;
    cin>>n>>m;
    vec a(n+1),b(m+1);
    in(a);
    in(b);
    if(n==m){
        lli t1=a[0]/gcd(a[0],b[0]),t2=b[0]/gcd(a[0],b[0]);
        if(t1*t2>0)cout<<abs(t1)<<"/"<<abs(t2)<<endl;
        else cout<<"-"<<abs(t1)<<"/"<<abs(t2)<<endl;
    }
    else if(n>m){
        if(a[0]*b[0]>0)cout<<"Infinity"<<endl;
        else cout<<"-Infinity"<<endl;
    }
    else cout<<"0/1"<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    fo 0;
}