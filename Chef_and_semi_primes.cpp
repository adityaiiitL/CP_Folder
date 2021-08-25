#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    test_over:
    while(t--)
    {
        int n;
        cin>>n;
        int a[201]={0};
        for(int i=2;i<=200;i++)
        {
            if(a[i]==0)
            {
                for(int j=i;j<=200;j+=i)
                {
                    if(isprime(j/i)==true&&(j/i)!=i)a[j]=-1;
                    else a[j]=1;
                }
            }
        }cout<<a[7];
        /*
        for(int i=2;i<=200;i++)
        {
            if(a[i]==-1)
            {
                for(int j=i;j<=200;j++)
                {
                    if(a[j]==-1&&j+i==n)
                    {
                        cout<<i<<" "<<j<<endl;
                        goto test_over;
                    }
                }
            }
        }
        cout<<"NO\n";*/
    }
    return 0;
}