#include<stdio.h>

int main() {
    int hr, min, sec;

    printf("Enter time (hour, minute and second): ");
    scanf("%d%d%d", &hr, &min, &sec);

    // if((hr>=0 && hr<24) && (min>=0 && min<60) && (sec>=0 && sec<60)){
    //     printf("Time is valid");
    // }else{
    //     printf("Time is invalid");
    // }
    
    
    // Using nested if
    if(hr>=0 && hr<24){
        if(min>=0 && min<60){
            if(sec>=0 && sec<60){
                printf("Time is valid");
            }else{
                printf("Time is invalid");
            }
        }else{
            printf("Time is invalid");
        }
    }else{
        printf("Time is invalid");
    }

    return 0;
}