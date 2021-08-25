#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int binaryNum[32],i=0;
        while(n>0)
        {
            binaryNum[i]=n%2;
            n/=2;
            i++;
        }
        int a[i];
        for(int j=0;j<i;j++)
        {
            a[j]=binaryNum[i-j-1];
        }
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]==1)
            {
                a[j]=0;
                break;
            }
        }
        int sum=0;
        for(int j=i-1;j>=0;j--)
        {
            sum+=pow(2,a[j]);
        }
        cout<<sum<<endl;
    }
    return 0;
}