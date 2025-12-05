// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

#include<stdio.h>
int main() {
    int days;
    int fine=0;
    printf(" Enter the number of days : ");
    scanf("%d", &days);

    switch(days) {
        case 0 ... 5:
            printf(" The fine is : %d₹", days * 2);
            break;
            
        case 6 ... 10:
        printf(" The fine is : %d", days * 4);
        break;

        case 11 ... 30:
        printf(" The fine is : %d", days * 6);
        break;

        case 31 ... 1000:
        printf(" Membership cancelled");
        break;

        default:
        printf(" Invalid Input");
    }
    return 0;
}