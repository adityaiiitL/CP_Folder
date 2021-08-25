#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
li fact (li n){

    if(n==1)return 1;
    // or if(n==0)return 1;
    li temp=fact(n-1);
    return n*temp;
    // or return n*fact(n-1);
}
void solve(){

    li n;
    cin>>n;
    cout<<fact(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}