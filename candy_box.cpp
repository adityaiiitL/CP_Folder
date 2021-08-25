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

bool myComp(pair<lli,lli>p1,pair<lli,lli>p2){

    return p1.second>p2.second;
}
void solve(){

    lli n;
    cin>>n;
    vec v(n);
    in(v);
    map m,mp;
    f(i,0,n)m[v[i]]++;
    vec ans;
    for(auto i:m){

        ans.pb(i.second);
    }
    sort(all(ans),greater<lli>());
    // out(ans);
    lli s=0,j=0,temp=-1;
    map x;
    f(i,0,ans.size()){

        if(x[ans[i]]>0&&i!=0){

            ans[i]=ans[i-1]-1;
            if(ans[i]<=0)break;
        }
        s+=ans[i];
        x[ans[i]]++;
    }
    cout<<s<<endl;
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