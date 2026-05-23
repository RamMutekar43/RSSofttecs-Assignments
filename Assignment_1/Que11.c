#include<stdio.h>
int main(){
    // Variable declaration and user inputs for room
    int l,b,h;
    printf("Enter length, breadth and height of the Room: ");
    scanf("%d%d%d",&l,&b,&h);

    // Variable declaration and user inputs for window
    int lWindow,bWindow;
    printf("Enter length and breadth of the Window: ");
    scanf("%d%d",&lWindow,&bWindow);

    // Variable declaration and user inputs door
    int lDoor,bDoor;
    printf("Enter length and breadth of the Door: ");
    scanf("%d%d",&lDoor,&bDoor);

    // calculations and logic
    // in room , whitewashed area is roof which is surface area of rectangle/sqaure 
    // we will get a area to be painted when we deduct the 
    // surface area of 2 windows, 1 door, roof and a ground area
    // from the total surface area of room
    int windowArea = lWindow*bWindow;
    int doorArea = lDoor*bDoor;
    int roof = l*b;
    int paintedArea = 2*(l*b + b*h + h*l)-(2*roof + 2*windowArea + doorArea);

    // print output
    printf("Area to be painted(interrior walls): %d\n",paintedArea);
    printf("The area to be whitewashed(roof): %d",roof);
    
    return 0;
}