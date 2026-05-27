#include<stdio.h>
int main(){
    int x, y, oprn, n;

    printf("Enter value of x and y: ");
    scanf("%d%d",&x,&y);

    printf("Select Operation index:\n ");
    printf("1. Check if x is equal to y\n ");
    printf("2. Check if x is less than y\n ");
    printf("3. Divide x by y\n ");
    printf("4. Check the user input number is between x & y\n ");
    printf("5. Swap x and y\n ");
    scanf("%d",&oprn);

    switch(oprn){
        case 1 :
        if(x==y){
            printf("Yes. x is equal to y.");
        }else{
            printf("No. x is not equal to y.");
        }
        break;

        case 2 :
        if(x<y){
            printf("Yes. x is less than y.");
        }else{
            printf("No. x is not less then y.");
        }
        break;

        case 3 :
        printf("x divided by y, the reminder id %d and quotient is %d ", (x%y), (x/y));
        break;

        case 4 :
        printf("Enter the number: ");
        scanf("%d",&n);
        if(n>x && n<y){
            printf("Yes. Number %d lies between %d and %d .", n, x,y);
        }else{
            printf("Yes. Number %d not lies between %d and %d .", n, x,y);
        }
        break;

        case 5 :
        printf("x and y before swapping.\n");
        printf("x = %d, x = %d \n", x,y);
        printf("x and y after swapping.\n");
        printf("x = %d, x = %d \n", y,y);
        break;
        
        default :
        printf("Enter valid operator.");
        return 0;

    }

    return 0;
}  