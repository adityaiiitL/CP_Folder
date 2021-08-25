#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=1; 
    int num=0;    // 5 = (5%2)*100 + ((5/2)%2)*10 + (((5/2)/2)%2)*1
    while(n>0)
    {
        num=num+n%2;
        n=n/2;
        num=num*10;
    }
    num=num/10;
    cout<<num;
    return 0;
}