#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
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

lli n,m;
vec v;
bool func(lli mid){

    lli s=0;
    f(i,0,n){

        if(v[i]<mid)continue;
        s+=v[i]-mid;
    }
    if(s>=m)return true;
    return false;
}
void solve(){

    // lli n,m;
    cin>>n>>m;
    // vec v(n);
    f(i,0,n){

        lli h;
        cin>>h;
        v.pb(h);
    }
    sort(all(v));
    lli l=0,h=1000000000;
    lli mx=intmin;
    while(h-l>1){

        lli mid=(l+h)/2;
        if(func(mid)){

            l=mid;
            mx=max(mx,mid);
        }
        else h=mid-1;
    }
    if(func(h))cout<<h<<endl;
    else cout<<l<<endl;
    // cout<<max(l,h)<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}