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
        int w[n],l[n],f[n],counter=0;
        for(int i=0;i<n;i++)cin>>w[i];
        for(int i=0;i<n;i++)cin>>l[i];
        for(int i=0;i<n-1;i++)f[i]=0;f[n-1]=n-1;
        for(int i=0;i<n-1;i++)
        {
            int a=i;
            for(int j=i+1;j<n;j++)
            {
                if(w[i]>w[j])
                {
                    while(a<=j)
                    {
                        a+=l[i];
                        counter++;
                    }
                }
                f[i]=a;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(w[i]>w[j]&&f[i]<=f[j])
                {
                    f[i]+=l[i];
                    counter++;
                }
                else if(w[i]<w[j]&&f[i]>=f[j])
                {
                    f[j]+=l[j];
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}