#include<bits/stdc++.h>
using namespace std;

class cars{

    private:
    string carName="swift";

    public:
    int carNo;
    int add(int a,int b){

        return a+b;
    }
};
int main(){

    // cars Car[5];
    // // cout<<Car.carName<<endl;
    // for(int i=0;i<5;i++){

    //     Car[i].carNo=(i+1)*(i+1);
    // }
    // for(int i=0;i<5;i++){

    //     cout<<Car[i].carNo<<" ";
    // }
    cars Car;
    int a,b;
    cin>>a>>b;
    cout<<Car.add(a,b)<<endl;

    return 0;
}