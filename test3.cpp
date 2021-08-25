#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    if(n%2==1)
    {
        int j=0;
        for(int i=1;i<=n;i+=2)
        {
            arr[j]=i;
            j++;
        }
        for(int i=n-1;i>=2;i-=2)
        {
            arr[j]=i;
            j++;
        }
    }
    else
    {
        int j=0;
        for(int i=1;i<=n-1;i+=2)
        {
            arr[j]=i;
            j++;
        }
        for(int i=n;i>=2;i-=2)
        {
            arr[j]=i;
            j++;
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<' ';
    return 0;
}