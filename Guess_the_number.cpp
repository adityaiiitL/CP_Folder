#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
bool perfect_sq(li n){
    li temp=sqrt(n);
    if(temp*temp==n)return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){

        li i=2,count_querry=0;
        querry: //Guess
        i++;
        for(;i<=1000000;i++){
            
            if(perfect_sq(i)){
                cout<<i<<endl;
                break;
            }
            else continue;
        }
        li n;
        cin>>n;
        if(n==0){
            count_querry++;
            goto querry;
        }
        if(n==1)continue;
        if(n==-1)return 0;
    }
    return 0;
}