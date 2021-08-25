#include<iostream>
using namespace std;
int main()
{
   cout<<"enter an alphabet: ";
   char a;
   cin>>a;
   
   switch(a)
   {
       case 'a':
       cout<<"vowel";
       break;
       case 'e':
       cout<<"vowel";
       break;
       case 'i':
       cout<<"vowel";
       break;
       case 'o':
       cout<<"vowel";
       break;
       case 'u':
       cout<<"vowel";
       break;
       default:
       cout<<"consonant";
       break;
   }
return 0;
}