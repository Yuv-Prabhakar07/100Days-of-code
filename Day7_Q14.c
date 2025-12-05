//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main() {
    char alpha;
    
    printf(" Enter any random alphabet : ");
    scanf(" %c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
        alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U'){
        printf(" The alphabet is a vowel ");
    } else {
        printf(" The alphabet is a consonant ");
    }
    return 0;
}