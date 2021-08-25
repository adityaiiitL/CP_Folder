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

    string s;
    cin>>s;
    lli n1=-1,n2=-1;
    bool flag=true;
    f(i,0,s.size()-1){

        if(s[i]=='1'&&s[i+1]=='1'&&flag==true){
            n1=i;
            flag=false;
        }
        if(s[i]=='0'&&s[i+1]=='0'&&flag==false){
            n2=i;
            break;
        }
    }
    if(n1==-1||n2==-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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