#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        int a[n][m],count_1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)count_1++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    if((a[i][j-1]==1||a[i][j+1]==1)&&(a[i-1][j]==1||a[i+1][j]==1)&&(a[i+1][j+1]==1||a[i-1][j-1]==1))
                }
            }
        }
    }
    return 0;
}