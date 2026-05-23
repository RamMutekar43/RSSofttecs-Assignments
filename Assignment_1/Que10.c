#include<stdio.h>
#include<math.h>
int main(){
    // Variable declaration and user inputs
    int x1,x2,y1,y2;
    printf("Enter x and y coordinates of the 1st point: ");
    scanf("%d%d",&x1,&y1);

    printf("Enter x and y coordinates of the 2nd point: ");
    scanf("%d%d",&x2,&y2);
    
    // calculating distance using euclidean distance formula 
    float distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    // print output
    printf("The distance between two points is: %f",distance);
    return 0;
}