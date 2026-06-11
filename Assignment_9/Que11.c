#include<stdio.h>

struct time{
    int hr;
    int min;
    int sec;
}t1;

int main(){

    printf("Enter Hours: ");
    scanf("%d",&t1.hr);

    printf("Enter Minutes: ");
    scanf("%d",&t1.min);

    printf("Enter Seconds: ");
    scanf("%d",&t1.sec);

    printf("\nTime : %02d:%02d:%02d",
    t1.hr,t1.min,t1.sec);

    return 0;
}