#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    // Euclid's Algorithm
    li a,b;
    cin>>a>>b;
    while(b!=0){

        li rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}