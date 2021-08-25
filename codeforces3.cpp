#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=1;
    for(int i=1;i<=509;i++)
    {
        p=(p*13)%9;
    }
    cout<<p;
    return 0;
}