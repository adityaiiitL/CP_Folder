#include<iostream>
using namespace std;
int main()
{
   cout<<"N";
    int n;
    cin>>n;
    1<=n<=10;
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }    
    
    cout<<factorial;
    
    return 0;

}