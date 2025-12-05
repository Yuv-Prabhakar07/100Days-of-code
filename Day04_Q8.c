//Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main() {
    int sum;
    int n;

    printf(" Enter the sum of how many natural number you want : ");
    scanf("%d", &n);

    sum = (n*(n + 1))/2;

    printf(" The sum of first %d natural numbers are : %d", n, sum);
    return 0;
}
