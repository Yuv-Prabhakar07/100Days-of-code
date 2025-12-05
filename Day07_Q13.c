//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main() {
    int year;
    int leap_year;

    printf(" Enter any random year : ");
    scanf("%d", &year);

    if (year % 4 == 0){   // % tells us the remainder
        printf(" This year is a leap year ");
    } else {
        printf(" This year is not a leap year ");
    }
    return 0;
}
