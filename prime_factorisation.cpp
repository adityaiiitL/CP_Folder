#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n;
    cin>>n;
    vector<li>v(n+1);
    for(li i=0;i<=n;i++)v[i]=i;
    for(li i=2;i<=n;i++){
        
        if(v[i]==i){
            for(li j=i*i;j<=n;j+=i){
                if(v[j]==j)v[j]=i;
            }
        }
    }
    set<li>s;
    while(n>1){

        s.insert(v[n]);
        n/=v[n];
    }
    for(auto i:s)cout<<i<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}