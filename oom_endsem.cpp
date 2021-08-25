#include<iostream>
using namespace std;
namespace example
{
    void say_hello()
    {
        cout<<"Hello"<<endl;
    }
}
int main()
{
    using namespace example;
    say_hello();
}