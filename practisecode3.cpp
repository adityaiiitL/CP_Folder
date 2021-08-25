#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
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
    cout<<s;

    return 0;
}