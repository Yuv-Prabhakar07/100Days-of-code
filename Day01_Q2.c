//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main() {
    int a,b;
    int sum,diff,prod,quo;

    printf(" Enter any 2 numbers : ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    if( b == 0 ){
        printf(" Sum = %d\n Difference = %d\n Product = %d\n Quotient = Invalid\n", sum, diff, prod);
      
    } else {
          quo = a / b;   // Define it after checking b to avoid division by zero.
        printf(" Sum = %d\n Difference = %d\n Product = %d\n Quotient = %d\n", sum, diff, prod, quo);
    }
    return 0;
}
