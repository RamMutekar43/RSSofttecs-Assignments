#include<stdio.h>
int main(){
    int item, qnt, price=0;

    printf("Please Select the food item number:\n");
    printf("1. Pizza      - Rs 200\n");
    printf("2. Burger     - Rs 120\n");
    printf("3. Pasta      - Rs 150\n");
    printf("4. Sandwich   - Rs 100\n");
    printf("5. Cold Drink - Rs 50\n");

    scanf("%d",&item);

    printf("Please enter food quantity:\n");
    scanf("%d",&qnt);

    switch(item){
        case 1 :
        price = qnt*200;
        break;

        case 2 :
        price = qnt*120;
        break;

        case 3 :
        price = qnt*150;
        break;

        case 4 :
        price = qnt*100;
        break;

        case 5 :
        price = qnt*80;
        break;
        
        default :
        printf("Enter valid food item.");
        return 0;

    }

    int gst = price*18/100;

    printf("Your total bill amount is %d . Including GST.",price+gst);

    return 0;
}