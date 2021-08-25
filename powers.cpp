#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
li power(li a,li b){

    if(b==0)return 1;
    if(b%2==0){
        li x=power(a,b/2);
        return x*x;
    }
    else{

        li x=power(a,b-1);
        return a*x;
    }
}
void solve(){

    li a,b;
    cin>>a>>b;
    cout<<power(a,b);
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}