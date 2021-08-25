#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
li power(li n, li p){

    if(p==0)return 1;
    li temp=power(n,p-1);
    return n*temp;
}
void solve(){

    li n,p;
    cin>>n>>p;
    cout<<power(n,p);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}