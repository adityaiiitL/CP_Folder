#include<iostream>
using namespace std;
int main()
{
	int L,N,W,H; 
	cout<<"L\n";
    cin>>L;
    cout<<"N\n";
    cin>>N;
    cout<<"W  H";
    cin>>W>>H;
    1<=L,W,H<=10000 && 1<=N<=1000;
	  

		if(W<L || H<L)
        {cout<<"UPLOAD ANOTHER";}
        else
        {
            if(W==L)
            {cout<<"ACCEPTED";}
            else{cout<<"CROP IT";}
        }
        

         
	
return 0;

}