// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void printStruct(struct Student *student) {
    printf("Name = %s || Roll = %d || Marks = %d", student->name, student->roll, student->marks);
}

int main() {
    struct Student student;
    printf("Name = ");
    scanf("%s", student.name);
    printf("Roll = ");
    scanf("%d", &student.roll);
    printf("Marks = ");
    scanf("%d", &student.marks);

    printStruct(&student);

}