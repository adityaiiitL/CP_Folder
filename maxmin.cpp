#include<iostream>
using namespace std;
int max(int n1,int n2,int n3)
{
    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<n1;
        }
        else
        {
            {cout<<n3;}
        }
        
    }
    else
    {
        if(n2>n3)
        {
            cout<<n2;
        }
        else
        {
            cout<<n3;
        }
        

    }
    return 0;
}

int min(int n1,int n2,int n3)
{
    if(n1<n2)
    {
        if(n1<n3)
        {
            cout<<n1;
        }
        else
        {
            cout<<n3;
        }
        
    }
    else
    {
        if(n2<n3)
        {
            cout<<n2;
        }
        else
        {
            cout<<n3;
        }
        

    }
    return 0;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    max(a,b,c);
    cout<<" ";
    min(a,b,c);
    
    
    return 0;
}