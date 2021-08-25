#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    1<=T<=100000;
    cin>>T;
    while(T-->0)
    {
        long long int A,B,C;
        -100000000<=A<=100000000;
        -100000000<=B<=100000000;
        -100000000<=C<=100000000;
        cin>>A>>B>>C;
        if(A+C==2*B)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if((A+C)%2==0)
            {
                cout<<(A+C)/2-B<<endl;
            }
            else
            {
                if(A>C)
                {
                    cout<<abs((A+C+1)/2-B)<<endl;
                }
                else
                {
                    cout<<abs((A+C+1)/2-B-1)<<endl;
                }
                
            }
            
        }
        
    }
    return 0;
}