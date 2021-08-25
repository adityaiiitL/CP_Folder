#include<bits/stdc++.h>
using namespace std;
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
 
bool myComp(pair<lli,lli>p1,pair<lli,lli>p2){
 
    lli s1=p1.first+p1.second,s2=p2.first+p2.second;
    if(s1==s2)return p1.first<p2.first;
    else return s1<s2;
}
void solve(){
 
    lli n;
    cin>>n;
    vector<pair<lli,lli>>v,v1;
    f(i,0,n){
 
        lli x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
        v1.pb(mp(x,y));
    }
    sort(all(v),myComp);
    // for(auto i:v)cout<<i.first<<" "<<i.second<<endl;
    for(auto i:v1){
 
        auto it=lower_bound(all(v),i);
        cout<<it-v.begin()<<" ";
    }
    cout<<endl;
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