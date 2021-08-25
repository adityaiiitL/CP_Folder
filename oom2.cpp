#include<iostream>
#include<string>
using namespace std;

class binary{

    string s;
    public:
        void read(void);
        bool chk_bin(void);
        void ones_complement(void);
};

void binary::read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
}

bool binary::chk_bin(void){

    for(int i=0;i<s.size();i++){

        if(s[i]!='0' and s[i]!='1'){
            
            return false;
        }
    }
    return true;
}

void binary::ones_complement(void){

    for(int i=0;i<s.size();i++){

        if(s[i]=='1')s[i]='0';
        else s[i]='1';
    }
    cout<<"Binary number after reversing the digits: "<<s<<endl;
}

int main(){

    binary b;
    b.read();
    if(b.chk_bin()){
        
        b.ones_complement();
    }
    else cout<<"Incorrect binary format!"<<endl;
    
    return 0;
}