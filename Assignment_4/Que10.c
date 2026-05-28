#include<stdio.h>
int main(){
    int sum=0, start, end;

    printf("Enter starting number and ending number: ");
    scanf("%d%d", &start,&end);
    
    for(int i=start;i<=end;i++){
        sum+=i;
    }
    printf("Sum from %d to %d is : %d \n",start,end,sum);

    return 0;
}