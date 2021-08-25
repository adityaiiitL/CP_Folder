#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,counter=0;
    cin>>s>>t;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='9')
        {
            if(counter==t)break;
            s[i]='9';
            counter++;
        }
    }
    cout<<s;
    return 0;
}
