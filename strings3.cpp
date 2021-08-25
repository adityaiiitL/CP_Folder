#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26];
    for(int i=0;i<26;i++)a[i]=0;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    int mx=0;char ans='a';
    for(int i=0;i<26;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            ans='a'+i;
        }
    }
    cout<<ans<<" appeared max times that is "<<mx;
    return 0;
}
