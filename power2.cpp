#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a=n,counter=0;
    while(n>1)
    {
        n/=2;
        counter++;
    }
    if(counter==log2(a))cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}