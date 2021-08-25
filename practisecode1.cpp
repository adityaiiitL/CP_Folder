#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    test:
    while(T-->0)
    {
        char s[200000];
        cin>>s;
        int a[strlen(s)];
        for(int i=0;i<strlen(s);i++)
        {
            a[i]=s[i];
        }
        int count=0;
        for(int i=0;i<strlen(s)/2;i++)
        {
            if(a[i]==a[strlen(s)-1-i])
            {
                count++;
            }
        }
        if(count==strlen(s)/2)
        {
            cout<<"-1"<<endl;
            goto test;
        }
        if(strlen(s)==1)
        {
            cout<<"-1"<<endl;
            goto test;
        }
        char temp;
        for(int i=0;i<strlen(s)-1;i++)
        {
            for(int j=i+1;j<strlen(s);j++)
            {
                if(s[i]>s[j])
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}