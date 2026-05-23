// Que - Accept the radius of the circle and print the area and circumfernece of the circle

#include<stdio.h>
int main(){
    // Variable declaration and user input for radius of circle
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // calculate area of the circle
    float area = 3.14*r*r;
    // calculate circumference of the circle
    float circumference = 2*3.14*r;

    // Print output
    printf("The area of the circle is: %f", area);
    printf("\nThe circumference of the circle is: %f", circumference);

    return 0;
}