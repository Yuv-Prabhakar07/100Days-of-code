// Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

struct Student findTopStudent(struct Student *student, int n) {
    int max_index = 0;
    for (int i = 0; i < n; i++) {
        if (student[i].marks > student[max_index].marks) {
            max_index = i;
        }
    }
    return student[max_index];
}

int main() {
    int n = 3;
    struct Student student[n];
    for (int i = 0; i < n; i++) {
        printf("Name = ");
        scanf("%s", student[i].name);
        printf("Roll = ");
        scanf("%d", &student[i].roll);
        printf("Marks = ");
        scanf("%d", &student[i].marks);
        printf("\n");
    }

    struct Student topper = findTopStudent(&student,n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}