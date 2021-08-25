#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[10000];
    getline(cin>>ws,s);
    for(int i=0;i<10000;i++)
    {
        if(s[i]>=97 && s[i]<=122) s[i]=s[i]-32;
    }
    cout<<s<<endl;
    return 0;
}