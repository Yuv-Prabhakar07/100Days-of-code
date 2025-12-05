//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main () {
    float temp;
    float temp_1;

    printf(" Enter the value of temperature in celcius: ");
    scanf("%f", &temp);

    temp_1 = (temp * ( 9 / 5)) + 32;

    printf(" The new temperature in Fahrenheit is %.2f", temp_1);
    return 0;
}