#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){

    li n,m;
    cin>>n>>m;
    map<li,char>mp;
    for(li i=0;i<n;i++){

        li h;
        cin>>h;
        mp[h]='f';
    }
    for(li i=0;i<m;i++){

        li h;
        cin>>h;
        mp[h]='c';
    }
    bool flag=true;
    li count=0;
    for(auto i:mp){

        if(i.second=='c'&&flag==true){
            
            flag=false;
            count++;
        }
        if(i.second=='f'&&flag==false){
            
            flag=true;
            count++;
        }
    }
    cout<<count<<endl;
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