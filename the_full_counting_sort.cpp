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
void solve(){
    
    vector<string> arr[100];
    char str[100000];
    int n,  x;
    cin >> n;
    int count;
    for (int i = 0; i < n / 2; i++)
    {
        cin >> x;
        cin >> str;
        arr[x].push_back("-");
        count=i;
    }
    for (int i=count+1; i < n; i++)
    {
        cin >> x;
        cin >> str;
        arr[x].push_back(str);
    }
    for (int i = 0; i < 100; i++)
    {
        x = arr[i].size();
        for (int j = 0; j < x; j++)
            cout << arr[i][j] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}