#include<bits/stdc++.h>
using namespace std;
bool ispow2(int n)
{
    if((n&(n-1))!=0 || n==0)return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<ispow2(n);
    return 0;
}