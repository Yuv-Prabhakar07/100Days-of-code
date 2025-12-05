// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main() {
    char ch;
    

    printf(" Enter a random character : ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf(" Your character is an Uppercase Alphabet");
    } else if(ch >= 'a' && ch <= 'z'){ 
            printf(" Your character is a Lowercase Alphabet");
    } else if(ch >= '1' && ch <= '9'){
                printf(" Your character is a digit");
    } else if(ch == '*' || ch == '^'|| ch == '%' || ch == '$' || ch == '@' || ch == '#'){
                    printf(" Your character is a Special character");
                }
                else {
                    printf(" Invalid character");
                }
   
return 0;
}