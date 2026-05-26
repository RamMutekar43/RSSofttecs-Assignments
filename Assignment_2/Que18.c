#include<stdio.h>

int main() {
    int days, nBooks, fine;

    printf("Enter number of books: ");
    scanf("%d", &nBooks);

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if(days<0){
        printf("Enter valid days.");
    }else if(days<=5) {
        fine = nBooks*days*5;
    }else if(days > 5 && days <= 10) {
        fine = nBooks*days*10;
    }else{
        fine = nBooks*days*15;
    }

    printf("Fine = Rs %d", fine);

    return 0;
}