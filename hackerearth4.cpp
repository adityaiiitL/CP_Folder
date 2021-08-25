#include<iostream>
using namespace std;
int main()
{
	int D,Oc,Of,Od,Cs,Cb,Cm,Cd;
	cin>>D>>Oc>>Of>>Od>>Cs>>Cb>>Cm>>Cd;
	1<=D<=1000000000;
	1<=Oc<=1000000000;
	1<=Of<=1000000000;
	1<=Od<=1000000000;
	1<=Cs<=1000000000;
	1<=Cb<=1000000000;
	1<=Cm<=1000000000;
	1<=Cd<=1000000000;
	if(Oc+(D-Of)*Od <= Cb+(D/Cs)*Cm+Cd*D)
	{
		cout<<"Online Taxi"<<endl;
	}
	else
	{
		cout<<"Classic Taxi"<<endl;
	}
	return 0;
}