#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
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
    vec v(n);
    in(v);
    lli c0=0,c1=0,c2=0;
    f(i,0,n){
        if(v[i]%3==0)c0++;
        if(v[i]%3==1)c1++;
        if(v[i]%3==2)c2++;
    }
    if(c1==c2&&c2==c0){
        cout<<0<<endl;
        return;
    }
    // cout<<c0<<" "<<c1<<" "<<c2<<endl;
    lli a[3]={c0,c1,c2};
    lli count=0;
    f(i,0,3){

        if(a[i]>n/3){

            lli diff=a[i]-n/3;
            a[i]=n/3;
            if(i==0)a[1]+=diff;
            if(i==1)a[2]+=diff;
            if(i==2)a[0]+=diff;
            count+=diff;
        }
    }
    f(i,0,3){

        if(a[i]>n/3){

            lli diff=a[i]-n/3;
            a[i]=n/3;
            if(i==0)a[1]+=diff;
            if(i==1)a[2]+=diff;
            if(i==2)a[0]+=diff;
            count+=diff;
        }
    }
    cout<<count<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}