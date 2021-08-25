#include<iostream>
using namespace std;
int main()
{
    int n;
    1<=n<=1000000;
    cin>>n;
    int a=n/5;
    if(n%5==0)
    {
        cout<<a;
    }
    else if(n%5==1)
    {
        cout<<a+1;
    }
    else if(n%5==2)
    {
        cout<<a+2;
    }
    else if(n%5==3)
    {
        cout<<a+3;
    }
    else 
    {
        cout<<a+4;
    }
    return 0;
}