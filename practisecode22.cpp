#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases,n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)cin >> a[i];
    cin >> test_cases;
    while(test_cases--)
    {
        int pow;
        cin >> pow;
        sort(a, a + n);
        int freq[n] = {0};
        for(int i=0;i<n;i++)
        {
            if (i != 0) freq[i] = freq[i-1] + a[i];
            else freq[i] = a[i];
        }
        int b = upper_bound(a, a + n, pow) - a;
        cout << b << " " << freq[b-1] << endl;
    }
}