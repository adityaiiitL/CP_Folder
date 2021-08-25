#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int k;
    scanf("%d",&k);
    for(int i=k;i<n;i++)a[i]=a[i+1];
    n--;
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}