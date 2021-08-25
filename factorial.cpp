#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
        int ans1=fact(n1);
        int ans2=fact(n2);
    
         cout<<ans1<<" "<<ans2;
   
    return 0;

}