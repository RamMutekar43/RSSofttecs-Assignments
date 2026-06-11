#include<stdio.h>

struct student{
    int rn;
    char name[50];
    float per;
};

int main(){

    struct student s1;
    struct student *ptr;

    ptr=&s1;

    printf("Enter Roll Number: ");
    scanf("%d",&ptr->rn);

    printf("Enter Name: ");
    scanf("%s",ptr->name);

    printf("Enter Percentage: ");
    scanf("%f",&ptr->per);

    printf("\nRoll Number : %d",ptr->rn);
    printf("\nName : %s",ptr->name);
    printf("\nPercentage : %.2f",ptr->per);

    return 0;
}