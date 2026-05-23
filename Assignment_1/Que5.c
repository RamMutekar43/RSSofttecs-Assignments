#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

    float ariMean = (a+b)/2;
    float harMean = a*b/(a+b);

    printf("Arithmetic Mean is: %f\n",ariMean);
    printf("Harmonic Mean is: %f",harMean);
    return 0;
}