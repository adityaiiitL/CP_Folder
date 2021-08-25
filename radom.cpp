#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,v;
    cin>>n>>k>>v;
    int mask=~(1<<k);
    n=n&mask;
    cout<<(n|v<<k);
    return 0;
}