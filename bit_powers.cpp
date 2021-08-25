#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
li pow(li a,li b){

    li p=1;
    while(b){

        if(b&1==1){
            p*=a;
        }
        b=b>>1;
        a*=a;
    }
    return p;
}
void solve(){

    li a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}