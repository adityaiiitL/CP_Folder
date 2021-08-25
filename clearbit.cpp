#include<bits/stdc++.h>
using namespace std;
int clearbit(int n,int k)
{
    int mask=~(1<<k);
    return (n&mask);
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<clearbit(n,k);
    return 0;
}