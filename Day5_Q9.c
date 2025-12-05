//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
int main() {
    float p,r,t;
    float compound,simple;

    printf(" Enter principal , rate and time : ");
    scanf(" %f %f %f", &p, &r, &t);

    simple = (p*r*t)/100;
    compound = p * (1 + r/100) * (1 + r/100) - p;

    printf(" Simple interest is : %0.2f\n Compond interest is : %0.2f", simple, compound);
    return 0;

}