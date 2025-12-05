// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void modifyStudent(struct Student *ptr) {
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);
}

int main() {
    struct Student student;
    struct Student *s_ptr;
    s_ptr = &student;
    printf("--- Enter Data via Pointer ---\n");
    modifyStudent(s_ptr);
    printf("\nOutput:\n");
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           s_ptr->name, s_ptr->roll, s_ptr->marks);

    return 0;
}