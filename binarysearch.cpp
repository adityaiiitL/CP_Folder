#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int low=0,high=n-1,mid;
    bool flag=false;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]<a[mid-1]&&a[mid]<a[mid+1])
        {
            flag=true;
            break;
        }
        if(a[mid]<a[0])high--;
        else low++;
    }
    if(flag)cout<<mid<<endl;
    else cout<<"FO"<<endl;
    return 0;
}