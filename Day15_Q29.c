//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

for(int i=n-1; i>0; i--){
    n = n * i;

}
    printf(" The factorial is %d", n);

return 0;

}