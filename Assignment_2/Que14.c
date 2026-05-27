// Que - Accept the x and y coordinate of a point and find the quadrant in which the point lies.

#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x and y coordinate value: ");
    scanf("%d%d",&x,&y);    


    if(x>0 && y>0){
        printf("%d and %d are in 1st Quadrant.",x,y);
    }else if(x<0 && y>0){
        printf("%d and %d are in 2nd Quadrant.",x,y);
    }else if(x<0 && y<0){
        printf("%d and %d are in 3rd Quadrant.",x,y);
    }else if(x>0 && y<0){
        printf("%d and %d are in 4th Quadrant.",x,y);
    }else{
        printf("%d and %d are at center",x,y);
    }

    return 0;
}
