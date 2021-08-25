#include<stdio.h>
int main()
{
    int n;
    float f;
    double d;
    scanf("%d %f %lf",&n,&f,&d);
    printf("size of int= %lu bytes, float=%lu bytes, double=%lu bytes.\n",sizeof(n),sizeof(f),sizeof(d));
    //sizeof() will give us the size of maximum datatype so that, maximum characters get accomodated in the memory
    printf("size of n+f= %lu bytes, f+d= %lu bytes, d+n= %lu bytes.\n",sizeof(n+f),sizeof(f+d),sizeof(d+n));
    double *ptr=&d;
    printf("size of pointer ptr is %lu bytes in my machine.\n",sizeof(ptr));
    return 0;
}