#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            for(int k=0;k<s.size();k++)
            {
                if(s[i]==s[j]||s[j]==s[k]||s[k]==s[i])continue;
                else cout<<s[i]<<s[j]<<s[k]<<endl;
            }   
        }
    }
    return 0;
}