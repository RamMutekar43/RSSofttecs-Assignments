#include<stdio.h>
int main(){
    // Variable declaration and user inputs
    int l,b,h;
    printf("Enter length, breadth and height of the Cuboid: ");
    scanf("%d%d%d",&l,&b,&h);

    // calculate surfaceArea and volume
    int surfaceArea = 2*(l*b + b*h + h*l);
    int volume = l*b*h;
    
    // print output
    printf("Surface Area of the Cuboid is: %d",surfaceArea);
    printf("Volume of the Cuboid is: %d\n",volume);
    return 0;
}