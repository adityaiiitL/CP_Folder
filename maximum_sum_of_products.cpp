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
lli n;
vec a,b;
// lli func(lli i1,lli i2){

//     lli t1=a[i1]*b[i2]+func(i1-1,i2+1);
//     // lli t2=a[i2]
// }   
void solve(){

    cin>>n;
    f(i,0,n){

        lli h;
        cin>>h;
        a.pb(h);
    }
    f(i,0,n){

        lli h;
        cin>>h;
        b.pb(h);
    }
    vec pre(n+1);
    f(i,0,n){
        pre[i+1]=a[i]*b[i]+pre[i];
        // cout<<pre[i+1]<<endl;
    }
    lli ans=pre[n];
    f(i,0,n){

        lli s=a[i]*b[i];
        for(lli j=i-1,k=i+1;j>=0 and k<n;j--,k++){

            s+=a[k]*b[j];
            s+=a[j]*b[k];
            ans=max(ans,s+pre[j]+pre[n]-pre[k+1]);
        }
        s=0;
        for(lli j=i,k=i+1;j>=0 and k<n;j--,k++){

            s+=a[k]*b[j];
            s+=a[j]*b[k];
            ans=max(ans,s+pre[j]+pre[n]-pre[k+1]);
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    fo 0;
}