#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int s,x,n;
    cin>>s>>x>>n;
    int arr[s];
    while(n--)
    {
        int t,y;
        cin>>t>>y;
        arr[t-1]=y;
        sum+=y;
    }    
    for(int i=0;i<s;i++)
    {
        if(arr[i]=='\0')
        {
            for(int j=1;j<=x;j++)
            {
                arr[i]=j;
                sum++;
                if(sum==s)
                {
                    cout<<i+1<<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}