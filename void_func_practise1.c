#include<stdio.h>
// Void func to solve the main code...
void solve()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        //Calling the solve func...
        solve();
    }
    return 0;
}