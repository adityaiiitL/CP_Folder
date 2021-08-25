#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T-->0)
    {
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++)cin>>s[i];
        for(int i=0;i<n;i++)cout<<s[i];
    }
    return 0;
}