#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>key;
    int low=0,high=n-1,i,j;
    //first occurence
    while(low<=high)
    {
        int mid1=(low+high)/2;
        if(a[mid1]==key&&a[mid1]>a[mid1-1])
        {
            i=mid1;
            cout<<mid1<<" ";
            break;
        }
        if(a[mid1]>key||a[mid1]==a[mid1-1])high=mid1-1;
        else low=mid1+1;
    }
    low=0,high=n-1;
    //last occurence
    while(low<=high)
    {
        int mid2=(low+high)/2;
        if(a[mid2]==key&&a[mid2]<a[mid2+1])
        {
            j=mid2;
            cout<<mid2<<" ";
            break;
        }
        if(a[mid2]<key||a[mid2]==a[mid2+1])low=mid2+1;
        else high=mid2-1;
    }
    //count
    cout<<j-i+1<<endl;
    return 0;
}