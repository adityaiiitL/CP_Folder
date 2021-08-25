#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve(){
    li n,k1,k2;
    cin>>n>>k1>>k2;
    li w,b;
    cin>>w>>b;
    li a[2][n];
    for(li i=0;i<2;i++)
    {
        for(li j=0;j<n;j++)a[i][j]=1;
    }
    for(li j=0;j<k1;j++)a[0][j]=0;
    for(li j=0;j<k2;j++)a[1][j]=0;
    li sum_w=0,sum_b=0;
    for(li i=0;i<n;i++)
    {
        if(a[0][i]==a[1][i]&&a[0][i]==0){
            sum_w++;
            a[0][i]=-1;
            a[1][i]=-1;
        }
        if(i!=n-1){
            if(a[0][i]==a[0][i+1]&&a[0][i]==0){
                sum_w++;
                a[0][i]=-1;
                a[0][i+1]=-1;
            }
        }
        if(a[0][i]==a[1][i]&&a[0][i]==1){
            sum_b++;
            a[0][i]=-1;
            a[1][i]=-1;
        }
        if(i!=n-1){
            if(a[0][i]==a[0][i+1]&&a[0][i]==1){
                sum_b++;
                a[0][i]=-1;
                a[0][i+1]=-1;
            }
        }
    }
    for(li i=0;i<n;i++){
        if(i!=n-1){
        if(a[1][i]==a[1][i+1]&&a[1][i]==0){
            sum_w++;
            a[1][i]=-1;
            a[1][i+1]=-1;
        }
        }
        if(a[1][i]==a[0][i]&&a[1][i]==0){
            sum_w++;
            a[1][i]=-1;
            a[0][i]=-1;
        }
        if(i!=n-1){
        if(a[1][i]==a[1][i+1]&&a[1][i]==1){
            sum_b++;
            a[1][i]=-1;
            a[1][i+1]=-1;
        }
        }
        if(a[1][i]==a[0][i]&&a[1][i]==1){
            sum_b++;
            a[1][i]=-1;
            a[0][i]=-1;
        }
    }
    if(sum_w>=w&&sum_b>=b)cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}