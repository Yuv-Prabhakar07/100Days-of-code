//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include<stdio.h>
int main() {
    int day;

    printf(" Enter a value between (1-7) : ");
    scanf("%d", &day);

    switch (day) {
    case 1:
    printf("Monday\n", day);
    break;

    case 2:
    printf("Tuesday\n", day);
    break;

    case 3:
    printf("Wednesday\n", day);
    break;

    case 4:
    printf("thursday\n", day);
    break;

    case 5:
    printf("Friday\n", day);
    break;

    case 6:
    printf("Saturday\n", day);
    break;

    case 7:
    printf("Sunday\n", day);
    break;

    default:
    printf(" Invalid Input");
    break;
    }
    return 0;
}