#include<stdio.h>
int main(){
    int start, end, sum=0;

    printf("Enter starting number and ending number: ");
    scanf("%d%d", &start,&end);
    
    for(int i=start;i<=end;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("Sum of even numbers from %d to %d is : %d",start,end,sum);

    return 0;
}