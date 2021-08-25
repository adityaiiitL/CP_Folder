#include<stdio.h>
typedef struct s1 
{
    //int n1;
    double m1;             // typedf <name> <alias name>
    //char a1;
}s_1;
struct s2 
{
    int n2;
    //char a2;
};
typedef struct s2 s_2;

int main()
{
    s_2 prabhav;
    prabhav.n2=2;
    //typedef int integer;
    //integer a=9;
    //printf("%d\n",prabhav.n2);
    printf("%d\n",sizeof(s_1));
    printf("%d\n",sizeof(s_2));

    return 0;
}