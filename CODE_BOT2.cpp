#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t;
    cin>>t;
    while(t--){

        long long int a,b,n;
        cin>>a>>b>>n;
        if(a%b==0){
            cout<<a*pow(10,n)<<"\n";
            continue;
        }
        bool flag=true;
        for(long long int i=1;i<=n;i++){
            a*=pow(10,i);
            long long int rem=a%b;
            if(rem==0){
                a*=pow(10,n-i);
                break;
            }
            if(b-rem>9){
                flag=false;
                break;
            }
            a=a+b-rem;
        }
        if(flag)cout<<a<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}