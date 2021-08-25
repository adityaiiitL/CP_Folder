#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(n>0)    
    {                 
       int a=n%10;
       sum=sum+i*a;
       i=i*8;
       n=n/10;
    }
    cout<<sum;
    return 0;
}