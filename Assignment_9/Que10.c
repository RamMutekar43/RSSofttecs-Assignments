#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
}d1;

int main(){

    printf("Enter Day: ");
    scanf("%d",&d1.day);

    printf("Enter Month: ");
    scanf("%d",&d1.month);

    printf("Enter Year: ");
    scanf("%d",&d1.year);

    printf("\nDate : %02d/%02d/%04d",
    d1.day,d1.month,d1.year);

    return 0;
}