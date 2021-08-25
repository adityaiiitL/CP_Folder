#include<stdio.h>
int main()
{
    int n,m;
    char op;
    // Take inputs in one go (not one-by-one)
    scanf("%d %d %c",&n,&m,&op);
    switch(op)
    {
        case '+':
            printf("%d\n",n+m);
            break;
        case '-':
            printf("%d\n",n-m);
            break;
        case '*':
            printf("%d\n",n*m);
            break;
        case '/':
            printf("%d\n",n/m);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}