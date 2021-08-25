#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
bool sorted(li a[],li n){

    if(n==1)return true;
    bool flag=sorted(a+1,n-1);
    if(a[0]<a[1]&&flag)return true;
    return false;
}
void solve(){

    li n;
    cin>>n;
    li a[n];
    for(li i=0;i<n;i++)cin>>a[i];
    cout<<sorted(a,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}