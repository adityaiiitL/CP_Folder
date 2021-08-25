// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

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

void solve(){

    lli n;
    cin>>n;
    vec v(n);
    in(v);
    map m;
    map temp;
    temp[v[0]]++;
    m[v[0]]=1;
    lli j=1;
    f(i,1,n){

        if(temp[v[i]-1]>0){

            m[v[i]]=m[v[i]-1];
        }
        else{
            j++;
            m[v[i]]=j;
        }
        temp[v[i]]++;
    }
    map t;
    for(auto i:m){
        t[i.second]++;
    }
    lli mx=intmin,mxi;
    for(auto i:t){
        if(mx<i.second){
            mx=i.second;
            mxi=i.first;
        }
    }
    vec ans,check;
    for(auto i:m){

        if(i.second==mxi)check.pb(i.first);
    }
    j=0;
    f(i,0,n){

        if(v[i]==check[j]){

            ans.pb(i+1);
            j++;
        }
    }
    cout<<check.size()<<endl;
    out(ans);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}