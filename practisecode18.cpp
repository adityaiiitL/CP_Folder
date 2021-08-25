#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,temp=1;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=temp;
            temp++;
        }
    }
    cout<<sum;
    return 0;
}