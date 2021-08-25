#include<iostream>
using namespace std;
int fact(int n1)
{
   int factorial=1;
   for(int i=1; i<=n1; i++)
   {
       factorial=factorial*i;
   }
   return factorial;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

return 0;
}