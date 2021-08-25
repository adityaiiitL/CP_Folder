#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int a[k];
        for(int i=0;i<k;i++)cin>>a[i];
        int b[n];
        for(int i=0;i<n;i++)
        {
            int score=0;
            string s;
            cin>>s;
            for(int j=0;j<k;j++)
            {
                if(s[j]=='1')score+=a[j];
            }
            b[i]=score;
        }
        for(int i=0;i<n;i++)cout<<b[i]<<endl;
    }
    return 0;
}