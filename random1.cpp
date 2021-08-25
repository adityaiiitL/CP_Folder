#include<bits/stdc++.h>
using namespace std;
int updatebit(int n,int k,int v)
{
    int mask=~(1<<k);
    n=n&mask;
    return (n|v<<k);
}
int main()
{
    int n,k,v;
    cin>>n>>k>>v;
    cout<<updatebit(n,k,v);
    return 0;
}