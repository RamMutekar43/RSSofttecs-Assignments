// Que - Accept dimensions of a cylinder and print the surface area and volume

#include<stdio.h>
int main(){
    // Variable declaration and user input for radius and height of cylinder
    float r,h;

    printf("Enter the radius of the cylinder: ");
    scanf("%f",&r);
    printf("Enter the height of the cylinder: ");
    scanf("%f",&h);

    float volume = 3.14*r*r*h; // calculate volume of the cylinder
    float surfaceArea = (2*3.14*r*h) + (2*3.14*r*r); // calculate surface area of the cylinder

    // Print Volume and Surface Area of Cylinder
    printf("The volume of the Cylinder is: %f\n", volume);
    printf("The surface area of the Cylinder is: %f", surfaceArea);
    return 0;
}