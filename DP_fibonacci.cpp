#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
// int d[100000]={-1};
li fib(li n,vector<li>&d){

    if(n<2)return n;
    if(d[n]!=-1)return d[n];
    li temp=fib(n-1,d)+fib(n-2,d);
    d[n]=temp;
    return temp;
}
void solve(){

    li n;
    cin>>n;
    // li d[n+1]={-1};
    vector<li>d(n+1,-1);
    cout<<fib(n,d)<<endl;
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