#include<bits/stdc++.h>
using namespace std;
string check(string s1,string s2)
{
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])return "NO";
    }
    return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        cout<<check(s1,s2)<<endl;
    }
    return 0;
}