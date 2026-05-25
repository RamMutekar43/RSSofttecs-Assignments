#include<stdio.h>
int main(){
    int num;
    printf("Enter any non zero number: ");
    scanf("%d",&num);

    if(num>0){
        printf("Positive Number.");
    }else if(num<0){
        printf("Negative Number.");
    }else{
        printf("Please enter valid number.");
    }

    return 0;
}