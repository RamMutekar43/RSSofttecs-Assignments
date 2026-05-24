#include<stdio.h>
int main(){
    int sub1,sub2,sub3;
    printf("Enter the 1st subject marks out of 100: ");
    scanf("%d",&sub1);    

    printf("Enter the 2nd subject marks out of 100: ");
    scanf("%d",&sub2);

    printf("Enter the 3rd subject marks out of 100: ");
    scanf("%d",&sub3);

    int total = sub1+sub2+sub3;
    float avg = total/3;
    
    printf("Total Marks are: %d\n",total);
    printf("Average Marks are: %f\n",avg);
    if(avg>=35 && avg<=60){
        printf("Pass");
    }else if(avg>60 && avg<80){
        printf("Class I");
    }else if(avg>=80 && avg<=100){
        printf("Class II");
    }else{
        printf("Fail");
    }

    return 0;
}