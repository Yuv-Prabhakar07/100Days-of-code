// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {

    FILE *fp;
    fp = fopen("data.txt","a");

    char text[256];
    printf("Enter Text: ");
    fgets(text,sizeof(text),stdin);
    fprintf(fp,"\n%s",text);
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}