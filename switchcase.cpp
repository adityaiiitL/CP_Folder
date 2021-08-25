#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter an alphabet:";
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"hola"<<endl;
        break;
        case 'c':
        cout<<"konichiwa"<<endl;
        break;
        default:
        cout<<"i am still learning"<<endl;
        break;
     }

 return 0;

}