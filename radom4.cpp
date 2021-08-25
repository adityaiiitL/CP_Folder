#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {

        long long int k;
        cin >> k;
        long long int sum = 0;
        for (long long int i = 1; i < 2 * k + 1; i++)
        {

            long long int temp1 = k + pow(i, 2), temp2 = k + pow(i + 1, 2);
            // cout<<temp1<<endl;
            sum += __gcd(temp1, temp2);
        }
        cout << sum << endl;
    }
    return 0;
}