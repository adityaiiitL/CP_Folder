#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){

    li n,m,k;
    cin>>n>>m>>k;
    li arr_xor=0;
    for(li i=1;i<=n;i++){
        if(min(i,m)%2==1)arr_xor^=k+i+1;
    }
    for(li i=2;i<=m;i++){
        if(min(m-i+1,n)%2==1)arr_xor^=k+i+n;

    }
    cout<<arr_xor<<endl;
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