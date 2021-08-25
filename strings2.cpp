#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        //lower to higher
        if(s[i]>='a'&&s[i]<='z')s[i]-=32;
        //higher to lower
        else if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
    }
    cout<<s<<endl;
    return 0;
}