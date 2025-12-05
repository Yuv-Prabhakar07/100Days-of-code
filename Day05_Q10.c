//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main() {
    int seconds,secs;

    printf(" Enter time in seconds : ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = seconds % 3600;

    int minutes_1 = minutes/60;
    secs = minutes_1 % 60; 

    printf(" Time in hours:minutes:seconds format is : %d:%d:%d", hours, minutes_1, secs);
    return 0;
}
