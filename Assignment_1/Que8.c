#include<stdio.h>
int main(){
    int empID, baseSal;
    printf("Enter Employee ID: ");
    scanf("%d",&empID);

    printf("Enter Base Salary: ");
    scanf("%d",&baseSal);

    float hRent = baseSal*10/100;
    float dAllowance = baseSal*30/100;
    float pTax = baseSal*5/100;

    int tHomeSal = baseSal+hRent+dAllowance-pTax;

    printf("Take home Salary of Employee with Employee Id %d is: %d",empID,tHomeSal);
    return 0;
}