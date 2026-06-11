#include<stdio.h>

struct student{
    int rn;
    char name[50];
    float per;
} s1;

int main(){
    printf("Enter Roll Number: ");
    scanf("%d",&s1.rn);

    printf("Enter Name: ");
    scanf("%s",s1.name);

    printf("Enter Percentage: ");
    scanf("%f",&s1.per);
    
    printf("Roll Number : %d\n",s1.rn);
    printf("Name : %s\n",s1.name);
    printf("Percentage : %f\n",s1.per);

    return 0;
}