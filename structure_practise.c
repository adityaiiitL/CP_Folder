#include<stdio.h>
#include<string.h>
#include"cars.h"
void solve()
{
    struct cars car[3];
    strcpy(car[0].name,"Toyota");
    strcpy(car[1].name,"Swift");
    strcpy(car[2].name,"Hyundai");
    car[0].capacity=6;
    car[1].capacity=5;
    car[2].capacity=4;
    car[0].price=16.27;
    car[1].price=10;
    car[2].price=9.9;
    // Stats of all cars...
    
    for(int i=0;i<3;i++)
    {
        printf("%s has a capacity of %d and its prize is %05.2f lakhs.\n",car[i].name,car[i].capacity,car[i].price);
        printf("---------------------------------------------------\n");
    }
}
int main()
{
    solve();
}