#include<stdio.h>

struct book{
    char bookId[20];
    char bookName[50];
    char authName[50];
    int price;
} b1;

int main(){
    printf("Enter Book ID: ");
    scanf("%s",b1.bookId);

    printf("Enter Book Name: ");
    scanf("%s",b1.bookName);

    printf("Enter Author Name: ");
    scanf("%s",b1.authName);
    printf("Enter Price: ");
    scanf("%d",&b1.price);
    
    printf("Book Id : %s\n",b1.bookId);
    printf("Book Name : %s\n",b1.bookName);
    printf("Book Name : %s\n",b1.authName);
    printf("Price : %d\n",b1.price);

    return 0;
}