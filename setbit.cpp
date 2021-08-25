#include<bits/stdc++.h>
using namespace std;
int setbit(int n,int k)
{
    return (n|1<<k);
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<setbit(n,k);
    return 0;
}