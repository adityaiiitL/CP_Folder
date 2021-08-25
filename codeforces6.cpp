#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,k1;
        cin>>n>>k;
        k1=k-1;
        int pA=n,pB=1;
        while(k1--)
        {
            pB++;
            pA--;
            if(pB==n+1)pB=1;
            if(pA==0)pA=n;
            if(pA==pB)
            {
                pB=pA+1;
                if(pB==n+1)pB=1;
            }
        }
        cout<<pB<<endl;
    }
    return 0;
}