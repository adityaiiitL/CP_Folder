#include<iostream>
using namespace std;
int main()
{ 
    int T;
    1<=T<=1000;
    cin>>T;
    while(T-->0)
    {
        int N;
        1<=N<=1000000;
        cin>>N;
        int i=1;
        int sum=0;
        while(N>0)
        {
            int a=N%10;
            sum=sum+a*10;
            sum=sum*10;
            N=N/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}