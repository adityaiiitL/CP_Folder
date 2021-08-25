#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        char s[n];
        cin>>s;
        int counter=0;
        bool flag=false;
        for(int i=0;i<strlen(s);i++)
        {
            if(flag==false&&(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0'))
            {
                flag=true;
                counter++;
            }
            else if(s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9'&&s[i]!='0')flag=false;
        }
        cout<<counter<<endl;
    }
    return 0;
}