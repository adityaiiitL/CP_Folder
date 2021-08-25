#include<stdio.h>
#include<string.h>
#include "car.h"
int main()
{
    struct vehicle cars[3];
    strcpy(cars[0].name,"Toyota");
    cars[0].capacity=8;
    cars[0].price_in_lakhs=10;

    strcpy(cars[1].name,"Hyundai");
    cars[1].capacity=5;
    cars[1].price_in_lakhs=20;

    strcpy(cars[2].name,"Honda");
    cars[2].capacity=10;
    cars[2].price_in_lakhs=30;

    for(int i=0;i<3;i++)
    {
        printf("%s\n",cars[i].name);
        printf("%d\n",cars[i].capacity);
        printf("%d\n",cars[i].price_in_lakhs);
        printf("--------------------------------\n");
    }
    return 0;
}