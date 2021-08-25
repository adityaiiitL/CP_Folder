#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void toh(li n, char src, char dest, char helper){

    if(n==0)return;
    toh(n-1,src,helper,dest);
    cout<<"Move block from "<<src<<" to "<<dest<<endl;
    toh(n-1,helper,dest,src);
}
void solve(){

    li n;
    char src,dest,helper;
    cin>>n>>src>>dest>>helper;
    toh(n,src,dest,helper);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}