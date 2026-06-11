#include<stdio.h>

struct student{
    int rn;
    char name[50];
    float per;
}s[5];

int main(){

    int top=0;

    for(int i=0;i<5;i++){

        printf("\nEnter Roll Number: ");
        scanf("%d",&s[i].rn);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Percentage: ");
        scanf("%f",&s[i].per);

        if(s[i].per>s[top].per){
            top=i;
        }
    }

    printf("\nAll Student Records\n");

    for(int i=0;i<5;i++){
        printf("\n%d %s %.2f",
        s[i].rn,s[i].name,s[i].per);
    }

    printf("\n\nTopper");
    printf("\nRoll Number : %d",s[top].rn);
    printf("\nName : %s",s[top].name);
    printf("\nPercentage : %.2f",s[top].per);

    return 0;
}