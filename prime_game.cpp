#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li n=1000000;
    vector<li>v(n+1,1),v1(n+1,0);
    for(li i=2;i<=n;i++){
        if(v[i]==1){

            for(li j=i*i;j<=n;j+=i){
                if(v[j]==1)v[j]=0;
            }
        }
    }
    //vector<li>;
    for(li i=2;i<=n;i++)v1[i]=v1[i-1]+v[i];
    li t;
    cin>>t;
    while(t--){

        li x,y;
        cin>>x>>y;
        //cout<<v1[x]<<"\n";
        if(v1[x]<=y)cout<<"Chef\n";
        else cout<<"Divyam\n";
    }
    return 0;
}