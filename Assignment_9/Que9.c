#include<stdio.h>

struct player{
    char pname[50];
    char team[50];
    int runs;
}p[3];

int main(){

    int max=0;

    for(int i=0;i<3;i++){

        printf("\nEnter Player Name: ");
        scanf("%s",p[i].pname);

        printf("Enter Team Name: ");
        scanf("%s",p[i].team);

        printf("Enter Runs: ");
        scanf("%d",&p[i].runs);

        if(p[i].runs>p[max].runs){
            max=i;
        }
    }

    printf("\nHighest Run Scorer");
    printf("\nPlayer : %s",p[max].pname);
    printf("\nTeam : %s",p[max].team);
    printf("\nRuns : %d",p[max].runs);

    return 0;
}