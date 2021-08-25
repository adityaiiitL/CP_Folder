#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T-->0)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(A>B)
        {
            if(C>A)
            {
                cout<<C<<endl;
            }
            else
            {
                if(B>C)
                {
                    cout<<B<<endl;
                }
                else
                {
                    cout<<C<<endl;
                }
                
            }
            
        }
        else
        {
            if(B<C)
            {
                cout<<B<<endl;
            }
            else
            {
                if(C>A)
                {
                    cout<<A<<endl;
                }
                else
                {
                    cout<<C<<endl;
                }
                
            }
            
        }
        
    }
    return 0;
}