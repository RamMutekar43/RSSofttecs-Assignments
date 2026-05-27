// Que - Write a program, which accepts annual basic salary of an employee and 
// calculates and displays the Income tax as per the following rules:
// Basic < 1,50,000 → Tax = 0
// 1,50,000 to 3,00,000 → Tax = 20%

3,00,000 → Tax = 30%

#include<stdio.h>
int main(){
    int salary, tax=0;
    printf("Enter Salary: ");
    scanf("%d",&salary);    


    if(salary<150000){
        printf("Payable tax is %d.",tax);
    }else if(salary>150000 && salary<300000){
        tax+=salary*20/100;
        printf("Payable tax is %d.",tax);
    }else{
        tax+=salary*30/100;
        printf("Payable tax is %d.",tax);
    }

    return 0;
}