#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void fibonacci(int n)
{
    int a=0,b=1,c;
    for(int i=0; i<=n; i++)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}



