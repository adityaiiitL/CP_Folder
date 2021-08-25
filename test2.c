#include<stdio.h>
#include<string.h>
int n;
struct cricket{

    char commentry[1024][1024];
    char sign;
    char batsmen[101];
    char bowler[101];
    int runs;
    int balls;
};
int main(){

    struct cricket game;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&game.commentry[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<strlen(game.commentry[i])){
            for(int k=0;k<)
        }
    }

}