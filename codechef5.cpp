#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maximum=0;
    for(int i=1;i<=10;i++)
    {
        if(n%i==0)
        {
            maximum=max(maximum,i);
        }
    }
    cout<<maximum<<endl;
    return 0;
}