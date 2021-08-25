#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
// Top-Down Approach (0-1 Knapsack)part-2
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    li count=0;
    for(li i=0;i<n;i++){
        cin>>v[i];
        count+=v[i];
    }
    if(count%2==1){
        cout<<"No"<<endl;
        return;
    }
    li sum=count/2;
    // Further Process is same as Subset-Sum-Problem.
    li a[n+1][sum+1];
    for(li i=0;i<=n;i++){
        for(li j=0;j<=sum;j++){
            if(i==0&&j==0)a[i][j]=1;
            if(i==0&&j!=0)a[i][j]=1;
            if(j==0&&i!=0)a[i][j]=0;
        }
    }
    for(li i=1;i<=n;i++){

        for(li j=1;j<=sum;j++){

            if(v[i-1]<=j){
                a[i][j]=(a[i-1][j-v[i-1]]|a[i-1][j]);
            }
            else a[i][j]=a[i-1][j];
        }
    }
    if(a[n][sum])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}