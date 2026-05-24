#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num>0){
        printf("Number is positive.");
    }else{
        printf("Not a positive number.");
    }

    return 0;
}