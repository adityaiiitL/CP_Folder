#include<stdio.h>
#include<math.h>
int main()
{
    double decayconstant;
    long int t;
    int No;
    int n;
    scanf("%lf", &decayconstant);
    scanf("%ld", &t);
    scanf("%d", &No);
    n=No*exp(-decayconstant*t);
    printf("%d\n",n);
    return 0;
}