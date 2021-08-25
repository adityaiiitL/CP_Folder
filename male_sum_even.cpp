#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    li sum=0;
    for(li i=0;i<n;i++){
        
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==0){

        cout<<0<<"\n";
        return;
    }
    bool flag=true;
    for(li i=0;i<n;i++){

        if(v[i]!=1)flag=false;
    }
    if(flag){

        cout<<-1<<"\n";
        return;
    }
    for(li i=0;i<n;i++){

        if(v[i]==2){
            cout<<1<<"\n";
            return;
        }
    }
    cout<<-1<<endl;

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