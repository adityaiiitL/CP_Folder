#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int n1,n2,n3,n4;
    cin>>n1>>n2;
    for(int i=n1; i<=n2; i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
   
    return 0;
}