#include<iostream>
using namespace std;
class employee{

    private:
        int a,b,c;
    public:
        void getData(int a,int b,int c); //Declaration
        void setData(){

            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            cout<<"Value of c is "<<c<<endl;
        }
};
// Definition
void employee::getData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    employee ep;
    ep.getData(a,b,c);
    ep.setData();
    return 0;
}