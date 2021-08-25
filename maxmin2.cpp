#include<iostream>
using namespace std;
int maximum(int a, int b, int c)
{
    int x=max(a, max(b,c));
    
    return x;

}

int minimum(int a, int b, int c)
{
    int x=min(a, min(b,c));
    
    return x;

}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maximum(a,b,c);
    cout<<" ";
    cout<<minimum(a,b,c);

    return 0;

}