    //Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int reversed=0,remainder=0;
    while(num!=0) {
        remainder = num %  10; 
        reversed = (reversed * 10) + remainder; 
        num = num / 10;
    }
    printf("%d",reversed);
    return 0;
}