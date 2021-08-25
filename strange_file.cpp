#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    lli n,m,x;
    cin>>n>>m>>x;
    if(x%n==1)cout<<(x/n)+1<<"\n";
    else if(x==1||x==n*m)cout<<x<<"\n";
    else{

        lli temp=x%n;
        lli div=x/n;
        if(temp==0){
            temp+=n;
            div--;
        }
        lli imp=(1+m*(temp-1))-temp;
        cout<<x+imp-div*(n-1)<<"\n";
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