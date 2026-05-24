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