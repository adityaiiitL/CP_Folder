#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n,x;
    cin>>n>>x;
    li max_rat=0;
    for(li i=1;i<=n;i++){

        li s,r;
        cin>>s>>r;
        if(s<=x){

            max_rat=max(max_rat,r);
        }
    }
    cout<<max_rat<<"\n";
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