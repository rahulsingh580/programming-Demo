#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s = {101, "Rahul", 88.5};

    struct Student *ptr = &s;

    printf("Roll Number = %d\n", ptr->rollNo);
    printf("Name = %s\n", ptr->name);
    printf("Marks = %.2f", ptr->marks);

    return 0;
}