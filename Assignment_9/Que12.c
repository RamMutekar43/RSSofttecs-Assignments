#include<stdio.h>

struct address{
    char city[30];
    char state[30];
};

struct employee{
    int id;
    char name[50];
    struct address a;
}e1;

int main(){

    printf("Enter Employee ID: ");
    scanf("%d",&e1.id);

    printf("Enter Name: ");
    scanf("%s",e1.name);

    printf("Enter City: ");
    scanf("%s",e1.a.city);

    printf("Enter State: ");
    scanf("%s",e1.a.state);

    printf("\nEmployee ID : %d",e1.id);
    printf("\nName : %s",e1.name);
    printf("\nCity : %s",e1.a.city);
    printf("\nState : %s",e1.a.state);

    return 0;
}