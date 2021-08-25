#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2; i<n; i++)
   { 
      if(n%i==0)
        {
           return true;
        }
   }
     return false;
}

int main()
{ 
    int n1,n2;
    cin>>n1>>n2;
    if(prime(n1))
    {
        cout<<"non-prime ";
    }
    else
    {
        {
            cout<<"prime ";
        }
    }

    if(prime(n2))
    {
        cout<<"non-prime ";
    }
    else
    {
        {
            cout<<"prime ";
        }
    }
    
    return 0;
}