#include<bits/stdc++.h>
using namespace std;
int numberofones(int n)
{
    int counter=0;
    while(n!=0)
    {
        n=n&(n-1);
        counter++;
    }
    return counter;
}
int main()
{
    int n;
    cin>>n;
    cout<<numberofones(n);
    /*int counter=0,a=n;
    while(a)
    {
        a/=2;
        counter++;
    }
    int arr[counter];
    for(int i=0;i<counter;i++)
    {
        arr[i]=n%2;
        n/=2;
    }
    int count=0;
    for(int i=counter-1;i>=0;i--)
    {
        if(arr[i]==1)count++;
    }
    cout<<count;*/
    return 0;
}