#include<iostream>
using namespace std;
int main()
{
   int X;
   0<X<=2000;
   float Y;
   0<=Y<=2000;
   cin>>X>>Y;
   if(X%5==0)
   {
       cout.precision(4);
        cout<<Y-X-0.50<<endl;
   }
   else
   {
       cout<<Y<<endl;
   }
   
    return 0;
}