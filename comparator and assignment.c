#include <stdio.h>

struct Student {
    char name[1];
    int roll;
    float marks;
};

int main() {
    // Initialize all members at once
    struct Student s1 = {"John", 101, 87.5};

    // Print values
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %f\n", s1.marks);

    return 0;
}
