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
    
    lli n,q;
    cin>>n>>q;
    multimap<lli,lli>mn;
    for(lli i=0;i<n;i++){

        lli h1,h2;
        cin>>h1>>h2;
        mn.insert(make_pair(h1,h2));
    }
    for(lli i=0;i<q;i++){

        lli h1,h2;
        cin>>h1>>h2;
        lli count=0;
        for(auto i:mn){

            if((h1<=i.second&&h2>=i.first)||(h2<=i.first&&h1>=i.second))count++;
            else if((h1<=i.first&&h2>=i.second)||(h1>=i.first&&h2<=i.second))count++;
        }
        cout<<count<<endl;
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