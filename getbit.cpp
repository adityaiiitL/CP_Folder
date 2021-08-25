#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int k)
{
    if((n&(1<<k))==0)return 0;
    return 1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<getbit(n,k);
    return 0;
}