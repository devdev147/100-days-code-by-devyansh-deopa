#include <stdio.h>

// Define a structure
struct Student {
    int id;
    float marks;
    char name[20];
};

int main() {
    struct Student s1 = {101, 88.5, "Alice"};
    struct Student *ptr;

    // Assign address of s1 to pointer
    ptr = &s1;

    // Modify structure members using -> operator
    ptr->id = 202;
    ptr->marks = 92.7;
    // To modify string, use strcpy
    strcpy(ptr->name, "Bob");

    // Display values using -> operator
    printf("Student Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Marks: %.2f\n", ptr->marks);
    printf("Name: %s\n", ptr->name);

    return 0;
}
