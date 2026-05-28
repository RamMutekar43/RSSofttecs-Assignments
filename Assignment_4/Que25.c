#include<stdio.h>
int main(){
    int n, tDigits,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Enter total number of digits in the number: ");
    scanf("%d",&tDigits);

    
    int temp=n;
    while(temp>0){
        int dig = temp%10;
        int pow=1;
        for(int i=0;i<tDigits;i++){
            pow*=dig;
        }
        sum+=pow;
        temp/=10;
    }
    
    if(sum==n){
        printf("Armstrong number.");
    }else{
        printf("Not an armstrong number.");
    }

    return 0;
}