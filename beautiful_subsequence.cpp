#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define ill int long long
#define ld long double

#define fi first
#define se second
#define pb push_back
// #define fo(i,k,n) for(ill i=k;i<n;i++)
// #define fr(i,n,k) for(ill i=n;i>=k;i--)

#define f0(i, a, b) for (int i = a; i < b; i++)
#define f1(i, a, b) for (int i = a; i <= b; i++)
#define f2(i, a, b) for (int i = a; i > b; i--)
#define f3(i, a, b) for (int i = a; i >= b; i--)

#define all(a) a.begin(), a.end()
#define pii pair<ill, ill>
#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mod 1000000007
#define mdl 998244353
#define endl '\n'

// dearrangements
// 1 -> 0
// 2 -> 1
// 3 -> 2
// 4 -> 9
// 5 -> 44

ill dp[1001][1001];
ill solve(ill arr[], ill k, ill num, ill index, ill curr, ill last)
{
    if (index == num)
    {
        return 0;
    }

    if(dp[index][curr]!=-1)return dp[index][curr];
    if (curr == 0 && last == -1)
    {
        ill v1 = solve(arr, k, num, index + 1, curr, last);
        // ill v2=1+solve(arr,k,num,index+1,curr+1,arr[index]);
        ill v2 = 1 + solve(arr, k, num, index + 1, curr, arr[index]);
        return dp[index][curr]=max(v1, v2);
    }
    else if (curr == 0 && last != -1)
    {

        if (arr[index] == last)
        {
            return dp[index][curr]=1 + solve(arr, k, num, index + 1, curr, last);
        }
        else
        {
            ill v1 = solve(arr, k, num, index + 1, curr, last);
            // ill v2=1+solve(arr,k,num,index+1,curr+1,arr[index]);
            ill v2 = 1 + solve(arr, k, num, index + 1, curr + 1, arr[index]);
            return dp[index][curr]=max(v1, v2);
        }
    }
    else
    {

        if (curr < k)
        {

            if (arr[index] == last)
            {
                return dp[index][curr]=1 + solve(arr, k, num, index + 1, curr, last);
            }
            else
            {
                ill v1 = solve(arr, k, num, index + 1, curr, last);
                ill v2 = 1 + solve(arr, k, num, index + 1, curr + 1, arr[index]);
                return dp[index][curr]=max(v1, v2);
            }
        }

        else if (curr == k)
        {
            if (arr[index] == last)
            {
                return dp[index][curr]=1 + solve(arr, k, num, index + 1, curr, last);
            }
            else
            {
                return dp[index][curr]=solve(arr, k, num, index + 1, curr, last);
            }
        }

        else
        {
            return dp[index][curr]=0;
        }
    }
}

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ill t, ic;
    cin >> t;
    // 	for(ic=1;ic<=t;ic++){
    f1(ic, 1, t)
    {

        memset(dp,-1,sizeof(dp));
        ill num, k;
        cin >> num >> k;

        ill arr[num];

        f0(i, 0, num)
        {
            cin >> arr[i];
        }

        ill curr = 0;

        // char ch='?';
        ill last = -1;

        ill ans = solve(arr, k, num, 0, curr, last);

        cout << ans << endl;
    }
    return 0;
}