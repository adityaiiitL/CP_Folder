#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    test:
    while(t--)
    {
        int n;cin>>n;
        string s[n];
        for(int i=0;i<n;i++)cin>>s[i];
        bool flag=false;
        int countstop=1;
        for(int i=0;i<n;i++)
        {
            if(flag)countstop=0;
            if(s[i]=="start"||s[i]=="restart")flag=true;
            else
            {
                countstop++;
                flag=false;
            }
            if(countstop>1)
            {
                cout<<404<<endl;
                goto test;
            }
        }
        cout<<200<<endl;
    }
    return 0;
}