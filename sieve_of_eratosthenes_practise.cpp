#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li a,b;
    cin>>a>>b;
    vector<li>v(b+1,0);
    for(li i=2;i<=b;i++){
        if(v[i]==0){

            for(li j=i*i;j<=b;j+=i){
                if(v[j]==0)v[j]=1;
            }
        }
    }
    for(li i=a;i<b;i++){
        if(v[i]==0)cout<<i<<" ";
    }
    /*
    li n;
    cin>>n;
    vector<li>v(n+1,0);
    for(li i=2;i<=n;i++){

        if(v[i]==0){
            for(li j=i*i;j<=n;j+=i){
                if(v[j]==0)v[j]=1;
            }
        }
    }
    for(li i=2;i<=n;i++){
        if(v[i]==0)cout<<i<<" ";
    }
    */
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}