#include<bits/stdc++.h>
using namespace std;
void inc(int *n)
{
    ++*n;
}
int main()
{
    int n;
    cin>>n;
    inc(&n);
    cout<<n;
    return 0;
}