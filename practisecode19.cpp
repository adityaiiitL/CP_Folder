#include<bits/stdc++.h>
using namespace std;
int main()
{
    char sub[10000];
    cin>>sub;
    map<char,int>m;
    for(int i=0;i<strlen(sub);i++)
    {
        char c=sub[i];
        m[c]++; 
    }
    int n;cin>>n;
    while(n--)
    {
        int q;cin>>q;
        set<char>s;
        for(int i=0;i<q;i++)
        {
            char c;
            cin>>c;
            s.insert(c);
        }
        bool flag=true;
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(m[(*i)]==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            int counter=0,count=0;
            for(auto i=s.begin();i!=s.end();i++)
            {
                if(m[*i]%2==0)counter+=m[*i];
                else
                {
                    counter+=m[*i]-1;
                    count++;
                }
            }
            if(count)cout<<counter+1<<endl;
            else cout<<counter<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;
}