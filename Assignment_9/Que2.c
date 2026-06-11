#include<stdio.h>

struct employeee{
    char empId[20];
    char name[50];
    int salary;
} e1;

int main(){
    printf("Enter Employee ID: ");
    scanf("%s",e1.empId);

    printf("Enter Name: ");
    scanf("%s",e1.name);

    printf("Enter Salary: ");
    scanf("%d",&e1.salary);
    
    printf("Employee Id : %s\n",e1.empId);
    printf("Name : %s\n",e1.name);
    printf("Salary : %d\n",e1.salary);

    return 0;
}