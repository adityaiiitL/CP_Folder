#include<bits/stdc++.h>
using namespace std;
void subsets(int a[],int n)
{
    for(int i=0;i<pow(2,n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    subsets(a,n);
    return 0;
}