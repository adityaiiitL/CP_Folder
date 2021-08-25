#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=1,counter=0;bool flag=true;
    if(s.length()==1)
    {
        cout<<"Good luck!"<<endl;
        return 0;
    }
    while(i<=s.length()-2)
    {
        if(counter>=4)
        {
            flag=false;
            break;
        }
        if(s[i]==s[i+1]&&s[i]==s[i-1])counter++;
        else counter=0;
        i++;
    }
    if(flag)cout<<"Good luck!"<<endl;
    else cout<<"Sorry, sorry!"<<endl;
    return 0;
}