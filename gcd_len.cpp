#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){

    li a,b,c;
    cin>>a>>b>>c;
    if(c==1){

        for(li i=1;i<=a;i++)cout<<9;
        cout<<endl;
        cout<<1;
        for(li i=1;i<=b-1;i++)cout<<0;
        cout<<endl;
        // cout<<__gcd(999999,9999);
        return;
    }
    if(a>=b){
    for(li i=1;i<=a-c+1;i++)cout<<9;
    for(li i=1;i<=c-1;i++)cout<<0;
    cout<<endl;
    cout<<1;
    for(li i=1;i<=b-1;i++)cout<<0;
    cout<<endl;
    }
    else{

        cout<<1;
        for(li i=1;i<=a-1;i++)cout<<0;
        cout<<endl;
        for(li i=1;i<=b-c+1;i++)cout<<9;
        for(li i=1;i<=c-1;i++)cout<<0;
        // cout<<" ";
    
    // cout<<__gcd(10000,999999000);
    cout<<endl;
    
    // cout<<__gcd(99,999);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}