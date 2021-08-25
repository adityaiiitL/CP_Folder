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
// lli 
void solve(){

    lli n,m;
    cin>>n>>m;
    vec a(n),b(m);
    in(a);
    in(b);
    lli t=n*m;
    lli mn=intmax;
    // lli p=1;
    f(k,0,m){

        lli p=a[0]&b[k];
            f(i,1,n){

            f(j,0,m){

                lli temp=a[i]&b[j];
                // cout<<temp<<endl;
                p=min(p,p|temp);
            }
        }
        mn=min(mn,p);
    }
    cout<<mn<<endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    fo 0;
}