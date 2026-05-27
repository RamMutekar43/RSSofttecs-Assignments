// Que - Accept temperature in fahrenheit and print it in Celcius and Kelvin

#include<stdio.h>
int main(){
    // Variable declaration and user input temperature in fahrenheit
    float fht;
    printf("Enter temerature in Fahrenheit: ");
    scanf("%f",&fht);

    // calculate temperature in celcius and kelvin
    float c = (fht-32)*5/9;
    float k = c+273.15;

    // print output
    printf("Temperature in Celcius is: %f\n",c);
    printf("Temperature in Kelvin is: %f",k);

    return 0;
}