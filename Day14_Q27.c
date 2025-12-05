//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main() {
    int n;
    printf(" Enter the value of n : ");
    scanf("%d", &n);
    int sum = 0;
    int odd = 1;

    for(int i=1; i<=n; i++){
        sum = sum + odd;
        odd = odd + 2;
    }
    printf("%d\n", sum);
    return 0;
}