//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main() {
    int integer;

    printf(" Enter a integer : ");
    scanf("%d", &integer);

    if (integer >= 0) {
        if (integer == 0) {
            printf(" The integer is Zero");

        } else {
            printf(" The integer is positive ");
    } }else {
        printf(" The integer is negative ");
    }
    return 0;

}