//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main() {
    int a,b,c;

    printf(" Enter any 3 lengths of sides of the triangle : ");
    scanf("%d %d %d", &a, &b, &c);

     if(a==b && b==c){
        printf(" It is an Equilateral Triangle ");
     } else if(a==b || b==c || c==a){
        printf(" It is an Isoceles Triangle ");
    
    } else {
        printf(" It is an Scalene Triangle");
    }
    return 0;
}