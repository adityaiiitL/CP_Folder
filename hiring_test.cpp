#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define lli long long int
#define ld long double
#define f(i,k,n) for(lli i=k;i<n;i++)
#define endl '\n'
void solve(){

    lli n,m;
    cin>>n>>m;
    lli x,y;
    cin>>x>>y;
    while(n--){

        string s;
        cin>>s;
        lli count_f=0,count_p=0;
        f(i,0,s.size()){

            if(s[i]=='F')count_f++;
            if(s[i]=='P')count_p++;
        }
        if(count_f>=x||(count_f>=x-1&&count_p>=y))cout<<1;
        else cout<<0;
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