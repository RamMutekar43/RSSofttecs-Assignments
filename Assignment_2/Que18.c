// Que - A library charges a fine for every book returned late. 
// Accept the number of days the member is late, compute and print the fine as follows:
// less than five days → Rs __ fine
// 6 to 10 days → Rs __ fine
// above 10 days → Rs __ fine

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