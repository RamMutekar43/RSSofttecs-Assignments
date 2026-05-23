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