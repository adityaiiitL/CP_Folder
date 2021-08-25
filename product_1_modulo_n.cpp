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

    lli n;
    cin>>n;
    vec v;
    f(i,1,n){

        if(__gcd(i,n)==1){

            v.pb(i);
        }
    }
    // out(v);
    // cout<<v.size()<<endl;
    lli p=1;
    f(i,0,v.size()){
        p=(p*v[i])%n;
    }
    if(p%n==1){
        cout<<v.size()<<endl;
        out(v);
    }
    else{

        lli k;
        // cout<<p%n<<endl;
        cout<<v.size()-1<<endl;
        f(i,0,v.size()){

            if(v[i]==p%n){
                k=v[i];
                continue;
            }
            cout<<v[i]<<' ';
        }
        // cout<<endl;
        // cout<<k<<endl;
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    fo 0;
}