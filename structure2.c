#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[54];
    int id;
    int marks;
}std;

int main()
{ 
    std harry,hermoine,ron;   
    strcpy(harry.name,"Harry Potter");
    strcpy(hermoine.name,"Hermoine Gringer");
    strcpy(ron.name,"Ronald Weisley");
    
    harry.id=1;
    hermoine.id=2;
    ron.id=3;
    
    harry.marks=50;
    hermoine.marks=80;
    ron.marks=45;

    printf("%s has ID: %d and he has got %d marks.\n",harry.name,harry.id,harry.marks);
    printf("%s has ID: %d and she has got %d marks.\n",hermoine.name,hermoine.id,hermoine.marks);
    printf("%s has ID: %d and he has got %d marks.\n",ron.name,ron.id,ron.marks);
    return 0;
}