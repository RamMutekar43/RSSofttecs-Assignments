// Accept temperature in fahrenheit and print it in Celcius and Kelvin

#include<stdio.h>
int main(){

    float fht;

    printf("Enter temerature in Fahrenheit: ");
    scanf("%f",&fht);

    float c = (fht-32)*5/9;
    float k = c+273.15;

    printf("Temperature in Celcius is: %f\n",c);
    printf("Temperature in Kelvin is: %f",k);

    return 0;
}