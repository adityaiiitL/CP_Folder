#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int count1=0;
    int count2=0;
    while(n>0)
    {
        int a=n%10;
        if(a==1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        n/=10;
    }
    if(count1>=6||count2>=6)cout<<"Sorry, sorry!"<<endl;
    
    return 0;
}