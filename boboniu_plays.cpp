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

    lli n,m,x,y;
    cin>>n>>m>>x>>y;
    fr(j,x-1,0)cout<<j+1<<' '<<y<<endl;
    f(j,x,n)cout<<j+1<<' '<<y<<endl;
    lli t=0;
    f(i,y,m){

        if(t%2==0){
            fr(j,n,1)cout<<j<<' '<<i+1<<endl;
        }
        else{
            f(j,1,n+1)cout<<j<<' '<<i+1<<endl;
        }
        t++;
    }
    fr(i,y-1,1){

        if(t%2==0){

            fr(j,n,1)cout<<j<<' '<<i<<endl;
        }
        else{
            f(j,1,n+1)cout<<j<<' '<<i<<endl;
        }
        t++;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    fo 0;
}