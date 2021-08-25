#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int nP=0,nC=0,nM=0;
        for(int i=0;i<3;i++)
        {
            if(s[i]=='P')nP++;
            if(s[i]=='C')nC++;
            if(s[i]=='M')nM++;
        }
        if(nP=1&&nC==1&&nM==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}