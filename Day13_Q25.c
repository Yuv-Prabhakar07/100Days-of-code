//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main() {
    int a,b;
    char operator;

    printf("Enter your first number:");
    scanf("%d", &a);
    printf("Enter your second number:");
    scanf("%d", &b);
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            printf("Result: %d", a + b);
            break;

        case '-':
            printf("Result: %d", a - b);
            break;

        case '*':
            printf("Result: %d", a * b);
            break;

        case '/':
            if(b != 0) {
                printf("Result: %d", a / b);
            } else {
                printf("Error: Division by zero");
            }
            break;

        case '%':
            if(b != 0) {
                printf("Result: %d", a % b);
            } else {
                printf("Error: Division by zero");
            }
            break;

        default:
            printf("Invalid operator");
    }

}