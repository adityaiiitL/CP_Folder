#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,c;
    cin>>a>>b>>c;
    cout<<ceil((a*c-b*c)/b)<<endl;
    return 0;
}