#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=0;
    while(n>0)
    {
        int a=n/10;
        b++;
    }
    if(b==10)
    {
        int e=1;
        int sum=0;
        while(n>0)
        {
            int c=n%10;
            sum=sum+c*e;
            n=n/10;
            e++;
        }
        if(sum%11==0)
        {
            cout<<"Legal ISBN"<<endl;
        }
        else
        {
            cout<<"Illegal ISBN"<<endl;
        }
        
    }
    else
    {
        cout<<"Illegal ISBN"<<endl;
    }
    

    return 0;
}