#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1,s2,s3,s4,s5,s6,s7,s8;
        s1=s.substr(0,4);
        s2=s.substr(0,3);
        s3=s.substr(0,2);
        s4=s[0];
        s5=s.substr(n-4,4);
        s6=s.substr(n-3,3);
        s7=s.substr(n-2,2);
        s8=s[n-1];
        if(s1=="2020"||s5=="2020"||s2+s8=="2020"||s3+s7=="2020"||s4+s6=="2020")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}