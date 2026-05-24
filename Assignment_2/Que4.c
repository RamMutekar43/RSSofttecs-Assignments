#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);

    printf("Enter Selling Price: ");
    scanf("%d",&sp);

    if(sp>cp){
        printf("Seller has made profit of: %d",sp-cp);
    }else if(cp>sp){
        printf("Seller has made loss of: %d",cp-sp);
    }else{
        printf("NO profit NO loss.");
    }

    return 0;
}