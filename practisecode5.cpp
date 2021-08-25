#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    test:
    while(t-->0)
    {
        char s1[100000];
        char s2[100000];
        cin>>s1>>s2;
        for(int i=0;i<strlen(s1);i++)
        {
            for(int j=i+1;j<strlen(s1);j++)
            {
                if(s1[i]>s1[j])
                {
                    char temp=s1[i];
                    s1[i]=s1[j];
                    s1[j]=temp;
                }
            }
        }
        for(int i=0;i<strlen(s2);i++)
        {
            for(int j=i+1;j<strlen(s2);j++)
            {
                if(s2[i]>s2[j])
                {
                    char temp=s2[i];
                    s2[i]=s2[j];
                    s2[j]=temp;
                }
            }
        }
        for(int i=0;i<strlen(s1);i++)
        {
            if(s1[i]!=s2[i])
            {
                cout<<"NO"<<endl;
                goto test;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}