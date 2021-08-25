#include<bits/stdc++.h>
using namespace std;
bool primecheck(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)break;
    }
    if(i==n)return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a,b;
        for(int i=1+n;;i++)
        {
            if(primecheck(i))
            {
                a=i;
                break;
            }
        }
        for(int i=a+n;;i++)
        {
            if(primecheck(i))
            {
                b=i;
                break;
            }
        }
        cout<<a*b<<endl;
    }
    return 0;
}