#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
li sum(li n){

    if(n==0)return 0;
    li temp=sum(n-1);
    return n+temp;
}
void solve(){

    li n;
    cin>>n;
    cout<<sum(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}