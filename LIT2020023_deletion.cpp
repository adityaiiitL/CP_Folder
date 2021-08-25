#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Give size of array: ";
    cin>>n;
    int a[n];
    cout<<"Give inputs of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Give the key index where you want to delete element: ";
    int k;
    cin>>k;

    // Deletion-step
    for(int i=k;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    cout<<"Array after the deletion process: ";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}