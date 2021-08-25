#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    long long int sum=0;
    for(int i=0;i<n;i++)sum+=a[i];
    cout<<sum<<endl;
    return 0;
}