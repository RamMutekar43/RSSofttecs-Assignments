#include<stdio.h>
int main(){
    // Variable declaration and user inputs
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

    // calculate Arithmetic mean and Harmonic mean
    float ariMean = (a+b)/2;
    float harMean = a*b/(a+b);

    // print output
    printf("Arithmetic Mean is: %f\n",ariMean);
    printf("Harmonic Mean is: %f",harMean);
    return 0;
}