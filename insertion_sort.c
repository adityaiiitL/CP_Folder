#include<stdio.h>
void insertion_sort(int a[],int n)
{
    //iterate over the whole loop starting from 1th element...
    for(int i=1;i<n;i++)
    {
        int key=a[i]; 
        int j=i-1;
        //checking if a particular element at and index before the j is greater than the key
        while(a[j]>key&&j>=0)
        {
            //if so, then we place it one space forward...
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)printf("%d ",a[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    //insertion sort...
    insertion_sort(a,n);
    //print the sorted array...
    print_array(a,n);
    return 0;
}