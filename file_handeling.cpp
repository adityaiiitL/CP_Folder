#include<stdio.h>
int main(){

    FILE *ptr=NULL;
    ptr=fopen("first_file.txt","r+");
    char s[100];
    fgets(s,13,ptr);
    printf("%s",s);
    char c=fgetc(ptr);
    printf("%c",c);
    c=fgetc(ptr);
    printf("%c",c);
   
   fputs("Hello",ptr);
   fputc(',',ptr);
   fputs(" this is aditya.\n",ptr);
   
    return 0;
}