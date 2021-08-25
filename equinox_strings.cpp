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

    lli n,a,b;
    cin>>n>>a>>b;
    string arr[n];
    for(lli i=0;i<n;i++){
        cin>>arr[i];
    }
    lli sa=0,an=0;
    for(lli i=0;i<n;i++){

        bool flag=false;
        
            if(arr[i][0]=='E'||arr[i][0]=='Q'||arr[i][0]=='U'||arr[i][0]=='I'||arr[i][0]=='N'||arr[i][0]=='O'||arr[i][0]=='X'){
                flag=true;
                // break;
            }
        
        if(flag)sa+=a;
        else an+=b;
    }
    if(sa>an)cout<<"SARTHAK"<<endl;
    else if(sa<an)cout<<"ANURADHA"<<endl;
    else cout<<"DRAW"<<endl;
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