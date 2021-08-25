#include<iostream>
using namespace std;
bool eligibility(int n)
{
   if(n>=18)
   {
       return true;
   }
   return false;
}

int main()
{
    int n;
    cin>>n;
    if(eligibility(n))
        {
            cout<<"eligible";
        }
    else
    {
        {
            cout<<"not eligible";
        }
    }
    
    return 0;
}