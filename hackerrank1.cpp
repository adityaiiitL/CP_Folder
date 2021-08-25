#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int low=0,high=n-1,count=0;
    //first occurence
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==a[mid+1]&&a[mid]>a[mid-1])
        {
            cout<<mid;
            break;
        }
        if(a[mid]<a[mid+1]) 
    }
    return 0;
}