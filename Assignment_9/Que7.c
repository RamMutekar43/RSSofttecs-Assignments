#include<stdio.h>

struct book{
    int id;
    char name[50];
    int status;
}b1;

int main(){

    printf("Enter Book ID: ");
    scanf("%d",&b1.id);

    printf("Enter Book Name: ");
    scanf("%s",b1.name);

    printf("Issue Status (1-Issued,0-Available): ");
    scanf("%d",&b1.status);

    if(b1.status==0){
        printf("\nBook Available");
        printf("\nBook ID : %d",b1.id);
        printf("\nBook Name : %s",b1.name);
    }
    else{
        printf("\nBook Issued");
    }

    return 0;
}
