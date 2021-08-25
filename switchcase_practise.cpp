#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>m>>n;
    char op;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<m+n<<endl;

        case '-':
        cout<<m-n<<endl;

        case '*':
        cout<<m*n<<endl;

        case '/':
        cout<<m/n<<endl;
        break;

        /*
        default:
        cout<<"Invalid operator\n";
        */
    }
    return 0;
}