// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>


int pivotInteger(int n) {
    int total = (n*(n+1))/2;
    int leftSum = 0;
    for (int i = 1; i <= n; i++) {
        leftSum += i;
        int rightSum = total - leftSum + i;
        if (leftSum == rightSum) {
            return i;
        }
    }
    return -1;
}


int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int pivot = pivotInteger(n);
    printf("%d\n", pivot);
    return 0;
}