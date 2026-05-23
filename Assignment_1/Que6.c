#include<stdio.h>
int main(){
    int l,b,h;
    printf("Enter length, breadth and height of the Cuboid: ");
    scanf("%d%d%d",&l,&b,&h);
    
    int surfaceArea = 2*(l*b + b*h + h*l);
    int volume = l*b*h;
    
    printf("Surface Area of the Cuboid is: %d",surfaceArea);
    printf("Volume of the Cuboid is: %d\n",volume);
    return 0;
}