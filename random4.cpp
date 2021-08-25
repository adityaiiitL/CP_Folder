#include <bits/stdc++.h>
#define ll long long int
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define mod 1000000007
#define cases \
    int t;    \
    cin >> t;
#define forin for (ll i = 0; i < n; i++)
#define forim for (ll j = 0; j < m; j++)
using namespace std;
 
void if_sum_partition(int n,int arr[],int sum,int full_sum)
{
    int dp[n + 1][sum + 1];
 
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                dp[i][j] = false;
            if (j == 0)
                dp[i][j] = true;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = ((dp[i - 1][j - arr[i - 1]] + dp[i - 1][j])^(mod-2))%mod;
            else
                dp[i][j] =((dp[i - 1][j])^(mod-2))%mod;
        }
    }
    if(full_sum%2==0)
    cout <<((dp[n][sum]/2)^(mod-2))%mod<<"\n";
    else cout<<"0\n";

}
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    forin arr[i]=i+1; 
    if_sum_partition(n,arr, n*(n+1)/4,n*(n+1)/2);
}