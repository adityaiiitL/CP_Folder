#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {

        long long int n, m, count = 0;
        cin >> n >> m;
        for (long long int i = 1; i < n; i++)
        {

            for (long long int j = i + 1; j < n + 1; j++)
            {

                if (((m % i) % j) == ((m % j) % i))
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}