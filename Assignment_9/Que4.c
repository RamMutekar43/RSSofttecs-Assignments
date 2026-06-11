#include<stdio.h>

struct product{
    char prodId[20];
    char prodName[50];
    char prodQuality[20];
    int price;
} q1;

int main(){
    printf("Enter Product ID: ");
    scanf("%s",q1.prodId);

    printf("Enter Product Name: ");
    scanf("%s",q1.prodName);

    printf("Enter Quality (Bad, Average, Best): ");
    scanf("%s",q1.prodQuality);

    printf("Enter Price: ");
    scanf("%d",&q1.price);
    
    printf("Product Id : %s\n",q1.prodId);
    printf("Product Name : %s\n",q1.prodName);
    printf("Product Quality : %s\n",q1.prodQuality);
    printf("Price : %d\n",q1.price);

    return 0;
}