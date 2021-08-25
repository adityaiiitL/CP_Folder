#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        int type;cin>>type;
        int marks;
        string name;
        cin>>name;
        if(type==1)
        {
            cin>>marks;
            m[name]+=marks;
        }
        if(type==2)m[name]=0;
        if(type==3)cout<<m[name]<<endl;
    }
    return 0;
}