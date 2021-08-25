#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){

    li n;
    cin>>n;
    vector<li>v(n),v1(n-2);
    for(li i=0;i<n;i++){
        
        li h;cin>>h;
        v[i]=h;
    }
    if(n==2){
        cout<<0<<endl;
        return;
    }
    for(li i=0;i<n-2;i++){

        v1[i]=2*v[i+1]-v[i+2]-v[i];
    }
    sort(v1.begin(),v1.end());
    if(v1[n-3]<0)cout<<-1<<endl;
    else{
        if(v1[n-3]==0)cout<<0<<endl;
        else{
            cout<<v1[n-3]<<" ";
            cout<<v[1]-v[0]<<endl;
        }
    }
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