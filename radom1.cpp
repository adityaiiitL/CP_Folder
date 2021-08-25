#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll pow_itr(ll a,ll b){
    
    ll p=1;
    while(b){
        if(b&1==1){
            p=((p%mod)*(a%mod))%mod;
        }
        a=((a%mod)*(a%mod))%mod;
        b=b>>1;
    }
    return p;
}
int main(){

    ll t;
    cin>>t;
        while(t--){

            ll n;
            cin>>n;
            cout<<pow_itr(2,n-1)%mod<<endl;
        }
    return 0;
}