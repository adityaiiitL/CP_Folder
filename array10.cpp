#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,key;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>key;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==key)
            {
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag==true)cout<<"Element found"<<endl;
    else cout<<"Element not found"<<endl;
    return 0;
}