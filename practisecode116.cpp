#include<bits/stdc++.h>
using namespace std;
/* 1  2  3  4
   5  6  7  8
   9 10 11 12 */
int main()
{
    int n,m,key;
    cin>>n>>m>>key;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool flag=false;
    while(r<n&&c>=0)
    {
        if(a[r][c]==key)
        {
            flag=true;
            break;
        }
        if(a[r][c]<key)r++;
        else c--;
    }
    if(flag)cout<<"Element found!!\n";
    else cout<<"FO\n";
    return 0;
}