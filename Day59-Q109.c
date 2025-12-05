// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
#include <limits.h>

int maximumSubarray(int* arr, int arrSize, int k) {
    if (k > arrSize) {
        printf("Error! k is greater than size of array!\n");
        return INT_MIN;
    }
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    int maxSum = window_sum;
    for (int i = k; i < arrSize; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (window_sum > maxSum) {
            maxSum = window_sum;
        }
    }
    return maxSum;

}

int main() {
    int arrSize;
    printf("Enter number of elements: ");
    scanf("%d",&arrSize);
    int arr[arrSize];
    printf("Enter elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter size of subarrays: ");
    scanf("%d",&k);
    printf("%d\n", maximumSubarray(arr, arrSize, k));

    return 0;
}