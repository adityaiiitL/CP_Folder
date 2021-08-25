#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int k,value;
    scanf("%d %d",&k,&value);
    for(int i=n;i>k;i--)a[i]=a[i-1];
    a[k]=value;
    n++;
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}