// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File Not Found\n");
        return -1;
    }
    int vowels = 0;
    int consonants = 0;

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Number of vowels : %d\n", vowels);
    printf("Number of consonants : %d\n", consonants);

    return 0;
}