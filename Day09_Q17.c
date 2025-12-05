//Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c;
    float discriminant,root1,root2,root;

    discriminant = b*b - 4*a*c;
    printf("Enter coefficients a, b and c (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);

    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root1 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different\n");
        printf(" The roots are : %0.2f and %0.2f", root1 , root2);

    } else if(discriminant == 0){
            root1 = root2 = root = -b / (2*a);
            printf("Roots are real and same\n");
            printf("The root is : %0.2f", root);
        } else {
            printf(" The roots are complex");
        }
return 0;
    }
