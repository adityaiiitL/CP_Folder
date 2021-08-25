#include<iostream>
using namespace std;
int main()
{
    int l,r,k;
    1<=l<=r<=1000;
    1<=k<=1000;
    cin>>l>>r>>k;
    int a=0;
    for(int i=l; i<=r; i++)
    {

        if(i%k==0)
        {
            a++;
        }
    }
    cout<<a;
    return 0;
}