#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a[x][y];
    int b[y][z];
    int c[x][z];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<z;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<z;j++)
        {
            c[i][j]=0;
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<z;j++)
        {
            for(int k=0;k<y;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<z;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}