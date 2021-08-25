#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]+s[i+1])%2!=0 || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            cout<<"invalid"<<endl;
            return 0;
        }
    }
    cout<<"valid"<<endl;
    return 0;
}
