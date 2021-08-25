#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        int diff=INT_MAX;
        for(int j=0;j<i;j++)
        {
            int temp=a[i]-a[j];
            if(abs(temp)<diff)diff=temp;
        }
        cout<<a[i]-diff<<" ";
    }
    return 0;
}