#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    lli a,y,x;
    cin>>a>>y>>x;
    //lli temp=(x+1)*(pow(x+1,a)-1)/x;
    if(a==y){
        
        lli temp=(x+1)*(pow(x+1,y-1)-1);
        cout<<temp<<"\n";
    }
}
int main()
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