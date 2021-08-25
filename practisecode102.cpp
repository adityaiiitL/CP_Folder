#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O2")
#pragma GCC Optimization ("unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define llint long long int
#define rep0(i,k,n) for(auto i=k;i<n;i++)
#define rep1(i,k,n) for(auto i=k;i<=n;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint t;
    cin>>t;
    while(t--){
        float k1, k2, k3, v;
        cin>>k1>>k2>>k3>>v;
        float speed=k1*k2*k3*v;
        float ti=100/speed;
        ti*=100;
        ti+=0.5;
        float tt=ti;
        float aa=tt/100;
        if(aa<9.58){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}