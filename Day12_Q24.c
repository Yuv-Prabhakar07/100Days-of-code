// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

#include<stdio.h>
int main() {
    int units;
    printf(" UNITS : ");
    scanf("%d", &units);

    switch(units){
        case 0 ... 100:
        printf("Bill : %d", units * 5);
        break;

        case 101 ... 200:
         printf("Bill : %d", units * 7);
        break;

        case 201 ... 300:
         printf("Bill : %d", units * 10);
        break;

        case 301 ... 100000000:
         printf("Bill : %d", units * 12);
        break;

        default:
        printf(" INvalid");
    }
    return 0;
}