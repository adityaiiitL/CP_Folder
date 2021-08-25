#include<stdio.h>
#include<string.h>
// func to reverse the string s
void func1(char s[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        char temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
}
// func to increase each value of array a
void func2(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]++;
    }
}
// func to swap the values of two numbers
void func3(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    
    int n;
    scanf("%d",&n);
    /*
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    func2(a,n);
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    
    int a,b;
    scanf("%d %d",&a,&b);
    func3(&a,&b);
    printf("%d %d",a,b);
    */
    char s[n];
    scanf("%s",&s);
    func1(s,n);
    printf("%s",s);
    
    return 0;
}