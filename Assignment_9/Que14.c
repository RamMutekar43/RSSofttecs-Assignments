#include<stdio.h>

struct student{
    int rn;
    char name[50];
    float per;
};

void display(struct student s){

    printf("\nRoll Number : %d",s.rn);
    printf("\nName : %s",s.name);
    printf("\nPercentage : %.2f",s.per);
}

int main(){

    struct student s1;

    printf("Enter Roll Number: ");
    scanf("%d",&s1.rn);

    printf("Enter Name: ");
    scanf("%s",s1.name);

    printf("Enter Percentage: ");
    scanf("%f",&s1.per);

    display(s1);

    return 0;
}