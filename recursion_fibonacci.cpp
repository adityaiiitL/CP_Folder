#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
li fibonacci(li n){

    if(n==0)return 0;
    if(n==1)return 1;
    // or if(n==0||n==1)return n;
    li temp=fibonacci(n-1)+fibonacci(n-2);
    return temp;
}
void solve(){

    li n;
    cin>>n;
    cout<<fibonacci(n);
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}