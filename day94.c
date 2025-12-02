// Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct student {
    char name[20];
    int roll_no;
    int marks;
};

void display(struct student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll_no, s.marks);
}

int main() {
    struct student s1;

    printf("Enter Student Details:\n");

    printf("Name: ");
    scanf("%s", s1.name);

    printf("Roll: ");
    scanf("%d", &s1.roll_no);

    printf("Marks: ");
    scanf("%d", &s1.marks);

    printf("\n");
    display(s1);

    return 0;
}