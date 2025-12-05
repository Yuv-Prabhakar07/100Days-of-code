// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

#include <stdio.h>

void greaterArray(int arr[], int n) {
    int output[n];
    for (int i = 0; i < n; i++) {
        output[i] = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                output[i] = arr[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i == n-1) {
            printf(" %d\n", output[i]);
        }else if (i == 0) {
            printf("%d,", output[i]);
        }else {
            printf(" %d,", output[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    greaterArray(arr, n);
    return 0;
}