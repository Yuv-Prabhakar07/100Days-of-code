//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main() {
    float radius;
    float area,circumference;
    

    printf(" Enter the value of radius : ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    
    printf(" Area = %.2f\n Circumference = %.2f\n", area, circumference);
    return 0;
}
