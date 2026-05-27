// Que - Accept three sides of triangle as input, 
// and print whether the triangle is valid or not.

#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the length of 1st side of triangle: ");
    scanf("%d",&s1);    

    printf("Enter the ength of 2nd side of triangle: ");
    scanf("%d",&s2);

    printf("Enter the ength of 3rd side of triangle: ");
    scanf("%d",&s3);

    if((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2){
        printf("Valid Triangle");
    }else{
        printf("Invalid Triangle");
    }

    return 0;
}