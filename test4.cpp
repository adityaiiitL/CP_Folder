#include <bits/stdc++.h>
using namespace std;

int main()
{

    int nodes, edges;

    cout << "Enter the number of nodes : ";
    cin >> nodes;

    cout << "Enter the number of edges : ";
    cin >> edges;

    list<int> list1[nodes + 1];
    list<int> list2[nodes+1];

    for(int i=1;i<=edges;i++){
    
        int p,q;
        cin>>p>>q;
        list1[p].push_back(q);
        list2[q].push_back(p);
    }
    for(int i=1;i<=nodes;i++){
        if(list1[i].size()==0){
            cout<<"There are no emanting arcs from node: "<<i<<endl;
            continue;
        }
        cout<<i<<" : ";
        for(auto j:list1[i]){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    cout<<"-------"<<endl;
    for (int i = 1; i <=nodes; i++)
    {
        if(list2[i].size()==0){
            cout<<"There are no terminating arcs in node: "<<i<<endl;
            continue;
        }
        cout<<i<<" : ";
        for (auto it : list2[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}