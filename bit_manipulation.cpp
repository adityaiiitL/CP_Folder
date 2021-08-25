#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    for(li i=1;i<(1<<n);i++){

        for(li j=0;j<n;j++){

            if(i&(1<<j))cout<<v[j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}