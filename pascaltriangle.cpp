#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

int main()
{                                            
    int t;
    1<=t<=100;
    cin>>t;
    while(t-->0)
    {
        int n; 
        1<=n<=40;                                  
        cin>>n;                                  
        for(int i=0; i<n; i++)                 
        {                                        
            for(int j=0; j<=i; j++)
            {
                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}