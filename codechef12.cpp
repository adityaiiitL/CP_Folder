#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {  
        int n;
        cin>>n;
        int w[n],l[n];
        for(int i=0;i<n;i++)cin>>w[i];
        for(int i=0;i<n;i++)cin>>l[i];
        int index[n]={},copy[n]={};
        for(int i=0;i<n;i++)index[w[i]-1]=i;
        int count=0;
        for(int i=0;i<n;i++)copy[i]=index[i];
        for(int i=0;i<n-1;i++)
        {
            if(index[i+1]<=index[i])
            {
                for(int j=1;j<=100;j++)
                {
                    index[i+1]+=l[copy[i+1]];
                    count++;
                    if(index[i+1]>index[i])break;
                }
            }     
        }           
        cout<<count<<endl;
    }
    return 0;
}