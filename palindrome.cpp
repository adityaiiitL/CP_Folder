#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])flag=false;
    }
    if(flag)cout<<"Word is a palindrome !!"<<endl;
    else cout<<"FO !!"<<endl;
    return 0;
}