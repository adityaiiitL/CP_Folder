#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    m["Adiya"]=95;
    m["Prabhav"]=96;
    m["Gaurav"]=94;
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    return 0;
}