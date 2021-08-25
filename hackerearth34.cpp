#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,counter=0,max=0;
    while(i<s.length())
    {
        if(counter>max)
        {
            max=counter;
        }
        if(s[i]!=s[i+1])
        {
            counter++;
        }
        else 
        {
            counter=0;
        }
        i++;
    }
    cout<<max+1;
    return 0;
}