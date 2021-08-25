#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(n>0)
    {
        int a=n%10;
        sum+=a*pow(2,i);
        n/=10;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}