//Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main() {
    int month;

    printf(" Enter the value of the month between (1-12) respectively : ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        printf("January - 31 Days", month);
        break;

        case 2:
        printf("Febraury - 28 Days ", month);
        break;

        case 3:
        printf("March - 31 Days", month);
        break;

        case 4:
        printf("April - 30 Days", month);
        break;

        case 5:
        printf("May - 31 Days", month);
        break;

        case 6:
        printf("June - 30 Days", month);
        break;

        case 7:
        printf("July - 31 Days", month);
        break;

        case 8:
        printf("Auguest - 31 Days", month);
        break;

        case 9:
        printf("September - 30 Days", month);
        break;

        case 10:
        printf("October - 31 Days", month);
        break;

        case 11:
        printf("November - 30 Days", month);
        break;

        case 12:
        printf("December - 31 Days", month);
        break;

        default:
        printf(" Invalid Input");

    }
    return 0;
}
