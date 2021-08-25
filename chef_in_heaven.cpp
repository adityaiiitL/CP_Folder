#include<bits/stdc++.h>
using namespace std;
// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")
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

    ld l;
    cin>>l;
    string s;
    cin>>s;
    ld no_zero=0,no_one=0;
    bool flag=false;
    f(i,0,s.size()){

        if(s[i]=='1'){
            no_one++;
            if(no_one/(i+1)>=(0.5)){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
        }
        
    }
    // cout<<no_one<<endl;
    if(!flag)cout<<"NO"<<endl;
    // if(no_one>=(l/2))cout<<"YES"<<endl;
    // else{

    //     lli temp=0;
    //     fr(i,s.size()-1,0){

    //         if(s[i]=='1')break;
    //         if(s[i]=='0'){
    //             temp++;
    //         }
    //     }
    //     if(no_one>=((l-temp)/2))cout<<"YES"<<endl;
    //     else cout<<"NO"<<endl;
    // }
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