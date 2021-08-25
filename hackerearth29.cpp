#include<bits/stdc++.h>
using namespace std;
int firstno(string s)
{
    return s[0];
}

int lastno(string s)
{
    return s[s.length()-1];
}

int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=1;i<=t/2;i++)
    {
        string s;
        cin>>s;
        a[i-1]=firstno(s);
    }
    for(int i=t/2+1;i<=t;i++)
    {
        string s;
        cin>>s;
        a[i-1]=lastno(s);
    }
    int num=0;
    for(int i=0;i<t;i++)
    {
        num=num*10+a[i];
    }
    if(num%11==0)cout<<"OUI"<<endl;
    else cout<<"NON"<<endl;
    return 0;
}