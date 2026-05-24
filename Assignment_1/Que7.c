// Accept two integers from the user and interchange them.
// Display the interchanged numbers. using temparory variable,
// and using + and - operator and using * and / operator

#include<stdio.h>
int main(){
    // Variable declaration and user inputs
    int a,b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // // Using temp  variable
    // int temp=a;
    // a=b;
    // b=temp;
    // printf("- Using temporary variable -\n");
    // printf("Interchanges numbers are\n a = %d \n b = %d", a,b);

    // // Using + and - operator
    // a = a+b;  
    // b = a-b;  
    // a = a-b;  
    // printf("- Using + and - operator -\n");
    // printf("Interchanges numbers are\n a = %d \n b = %d", a,b);

    // Using / and * operator
    // a = a*b;  
    // b = a/b;  
    // a = a/b;  
    // printf("- Using / and * operator -\n");
    // printf("Interchanges numbers are\n a = %d \n b = %d", a,b);


    return 0;
}