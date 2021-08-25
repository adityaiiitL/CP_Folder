#include<bits/stdc++.h>
using namespace std;
class store{

    public:

    int no_of_item;
    map<string,int>m;
    store(){

        no_of_item=5;
        m["item1"]=10;
        m["item2"]=20;
        m["item3"]=30;
        m["item4"]=40;
        m["item5"]=50;
    }

    void display(){

        for(auto i:m){
            cout<<i.first<<' '<<i.second<<endl;
        }
    }
};

class customer: public store {

    public:
    
    string mobile;
    vector<int>index,p1,price,q;
    vector<string>s1;
    int sum=0;
    void setMobile(string s){

        mobile=s;
    }

    void setVal(int i,string out,int quantity){

        auto it=m.find(out);
        int v1=(*it).second;
        index.push_back(i);
        s1.push_back(out);
        p1.push_back(v1*quantity);
        q.push_back(quantity);
    }

    void calculate(){

        for(auto i:price){
            sum+=i;
        }
    }

    void display(){

        cout<<"Mobile Number: ";
        cout<<mobile<<endl;

        int sz=index.size();
        int id=1;
        for(int i=0;i<sz;i++){


        }
    }
};
void solve(){

    user_no grocery;
    grocery.take_phoneNo();
    
}
int main(){

    solve();
}