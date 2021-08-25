#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    ld n,k;
    cin>>n>>k;
    li temp=ceil(n/k);
    li a=n,b=k;
    if(a%b==0){

        cout<<temp<<" "<<k<<"\n";
        return;
    }
    cout<<temp<<" "<<k-(b-a%b)<<"\n";
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){

        solve();
    }
    return 0;
}