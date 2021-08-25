#include<iostream>
using namespace std;
int power(int n1,int n2)
{
    for(int i=2;i<=n2;i++)
    {
        n1=n1*n1;
    }
    return n1;
}

int main()
{
    int t;
    1<=t<=10;
    cin>>t;
    while(t-->0)
    {
        int a,b,c,d,e;
        1<=a<=100;
        1<=b<=100;
        1<=c<=100;
        1<=d<=100;
        1<=e<=100;
        cin>>a>>b>>c>>d>>e;
        cout<<(power(a,b) + power(c,d))%e<<endl;
    }
    return 0;
}