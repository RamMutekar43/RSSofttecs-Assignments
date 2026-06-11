#include<stdio.h>

struct employee{
    int id;
    char name[50];
    float salary;
    float annual;
    float bonus;
}e1;

int main(){

    printf("Enter Employee ID: ");
    scanf("%d",&e1.id);

    printf("Enter Name: ");
    scanf("%s",e1.name);

    printf("Enter Monthly Salary: ");
    scanf("%f",&e1.salary);

    e1.annual = e1.salary * 12;
    e1.bonus = e1.salary * 0.10;

    printf("\nEmployee ID : %d",e1.id);
    printf("\nName : %s",e1.name);
    printf("\nAnnual Salary : %f",e1.annual);
    printf("\nBonus : %f",e1.bonus);

    return 0;
}