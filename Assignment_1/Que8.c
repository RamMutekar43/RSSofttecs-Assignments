// Que -  The basic salary of an employee is decided at the time of employment, 
// which may be different for different employees. Apart from basic, 
// employee gets 10% of basic as house rent, 30% of basic as dearness allowance. 
// A professional tax of 5% of basic is deducted from salary. Accept the employee id 
// and basic salary for an employee and output the take home salary of the employee.

#include<stdio.h>
int main(){
    // Variable declaration and user inputs
    int empID, baseSal;
    printf("Enter Employee ID: ");
    scanf("%d",&empID);

    printf("Enter Base Salary: ");
    scanf("%d",&baseSal);
    
    // Calculating house rend , dearness allowance and professional tax
    float hRent = baseSal*10/100;
    float dAllowance = baseSal*30/100;
    float pTax = baseSal*5/100;

    // Calculate take home salary
    int tHomeSal = baseSal+hRent+dAllowance-pTax;

    // print output
    printf("Take home Salary of Employee with Employee Id %d is: %d",empID,tHomeSal);
    return 0;
}