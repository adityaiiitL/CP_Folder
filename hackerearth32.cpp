#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,counter=0;
    while(i<s.length())
    {
        if(s[i]!='6')counter++;
        i++;
    }
    if(s[s.length()-1]!='6')cout<<counter<<endl;
    else cout<<"-1"<<endl;
    return 0;
}