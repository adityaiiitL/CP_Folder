#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s;
        sort(s.begin(),s.end());     
        t=s;
        reverse(t.begin(),t.end());
        if(t==s)cout<<"-1"<<endl;
        else cout<<s<<endl;
    }
    return 0;
}