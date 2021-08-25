#include<iostream>
using namespace std;
int main()
{
    int L,N;
    1<=L<=10000;
    1<=N<=1000;
    cin>>L>>N;
    while(N-->0)
    {
        int W,H;
        1<=W<=10000;
        1<=H<=10000;
        cin>>W>>H;
        if(W>=L && H>=L)
        {
            if(W==H)
            {
                cout<<"ACCEPTED"<<endl;
            }
            else
            {
                cout<<"CROP IT"<<endl;
            }
            
        }
        else
        {
            cout<<"UPLOAD ANOTHER"<<endl;
        }
    }
    return 0;
}