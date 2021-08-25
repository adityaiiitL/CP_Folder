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

    if(b==0)return 1;
    if(b%2==0){

        li temp=pow(a,b/2);
        return temp*temp;
    }
    else {
        li temp=pow(a,b-1);
        return a*temp;
    }
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