#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>=y&&x>=0&&y>=0)
        {
            cout<<x<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}