//Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main() {
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);

    int c;

    c = b;
    printf("two numbers : %d %d", c,a);
    return 0;
}