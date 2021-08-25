#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
// decreasing order
void dec_sequence(li n){

    if(n==0)return;
    cout<<n<<"\n";
    dec_sequence(n-1);
}
// increasing order 
void inc_sequence(li n){

    if(n==0)return;
    inc_sequence(n-1);
    cout<<n<<"\n";
}
void solve(){

    li n;
    cin>>n;
    dec_sequence(n);
    cout<<"-----"<<"\n";
    inc_sequence(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}