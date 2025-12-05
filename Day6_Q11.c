//Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main() {
    int integer;
    printf(" Enter a integer : ");
    scanf("%d", &integer);

    if(integer % 2 == 0) {
        printf(" The integer %d is even ", integer);
    }
else {
    printf(" The integer %d is odd", integer);
}

return 0;
    }
