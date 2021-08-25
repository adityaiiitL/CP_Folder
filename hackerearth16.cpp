#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    1<=T<=100;
    cin>>T;
    while(T-->0)
    {
        int N;
        1<=N<=30;
        cin>>N;
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=2*N;j++)
            {
                if(i+1<=j && j<=2*N-i)
                {
                    cout<<"#"<<" ";
                }       
                else
                {
                    cout<<"*"<<" ";
                }
                
            }
            cout<<endl;
        }
    }
    return 0;
}