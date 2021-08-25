#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    for(li i=1;i<=100;i++){

        li count=0;
        for(li j=1;j<=i;j++){
            if(i%j==0)count++;
        }
        if(count%2==1)cout<<i<<endl;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}