#include<stdio.h>
int main(){
    int l,b,h;
    printf("Enter length, breadth and height of the Room: ");
    scanf("%d%d%d",&l,&b,&h);

    int lWindow,bWindow;
    printf("Enter length and breadth of the Window: ");
    scanf("%d%d",&lWindow,&bWindow);

    int lDoor,bDoor;
    printf("Enter length and breadth of the Door: ");
    scanf("%d%d",&lDoor,&bDoor);

    int windowArea = lWindow*bWindow;
    int doorArea = lDoor*bDoor;
    int roof = l*b;
    int paintedArea = 2*(l*b + b*h + h*l)-(2*roof + 2*windowArea + doorArea);
    
    printf("Area to be painted(interrior walls): %d\n",paintedArea);
    printf("The area to be whitewashed(roof): %d",roof);
    
    return 0;
}