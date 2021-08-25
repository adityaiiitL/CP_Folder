#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s[n];
        for(int i=0;i<n;i++)cin>>s[i];
        for(int i=0;i<n-1;i++)
        {
            if(s[i][0]=='a')
            {
                for(int j=i;j<n;j++)
                {
                    if(s[j][0]=='b')
                    {
                        s[i][0]='b';s[j][0]='a';
                        
                    }
                }
            }
        }
    }
    return 0;
}