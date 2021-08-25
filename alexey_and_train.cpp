#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n;
    cin>>n;
    map<ld,ld>m;
    for(li i=0;i<n;i++){

        ld a,b;
        cin>>a>>b;
        pair<ld,ld>p;
        p.first=a;
        p.second=b;
        m.insert(p);
    }
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    auto it=m.begin();
    li i=0,sum=0;
    for(;i<n,it!=m.end();it++,i++){
        
        sum+=v[i];
        if(i==0)sum+=(*it).first;
        else if(sum<=(*it).first)sum=(*it).first+v[i];
        if((*it).second-sum<ceil(((*it).second-(*it).first)/2)){
            sum+=ceil(((*it).second-(*it).first)/2);
        }
        else{
            sum=(*it).second;
        }
        cout<<sum<<"\n";
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