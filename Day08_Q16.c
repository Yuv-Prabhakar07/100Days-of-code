//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main() {
    int num1,num2,num3;

    printf(" Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    if(num1 > num2){
        if(num1 > num3){
            printf(" The largest number is : %d", num1);
        } }
         else if(num2 > num3){
            printf(" The largest number is : %d", num2);
        }
    else {
        printf(" The largest number is : %d", num3);
    }
    return 0;
    }


// #include<stdio.h>
// int main() {
//     int a,b,c;

//     printf(" Enter any 3 number : ");
//     scanf("%d %d %d", &a, &b, &c);

//     if(a>=b && a>=c){
//     printf(" The largest number is : %d", a);
//     }else if(b>=a && b>=c){
//     printf("The largest number is : %d", b);

// } else {
//     printf(" The largest number is : %d", c);

// }
// return 0;
// }
