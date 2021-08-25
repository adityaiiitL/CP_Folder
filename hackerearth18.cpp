#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t1=1;
    int t2=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {    
            for(int j=1;j<=i;j++)
            {
                cout<<t1+1<<" ";
                t1++;
            }
        }
        else
        {
            if(i==1) cout<<"1";
            else
            {
                t2=t2+t1+3*i;
                for(int j=1;j<=i;j++)
                {
                    cout<<t2<<" ";
                    t2--;
                }
            }        
        }
        cout<<endl;
    }
    return 0;
}