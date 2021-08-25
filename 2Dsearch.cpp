#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,key;
    cin>>n>>m>>key;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int r=0,c=m-1;
    bool flag=false;
    while(r<n&&c>=0)
    {
        if(arr[r][c]==key)
        {
            flag=true;
            break;
        }
        if(arr[r][c]>key)c--;
        else r++;
    }
    if(flag)
    {
        cout<<"Element found !!"<<endl;
        cout<<r<<" "<<c<<endl;
    }
    else cout<<"Element not found !!"<<endl;
    return 0;
}