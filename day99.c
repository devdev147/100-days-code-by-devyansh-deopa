#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically using malloc
    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    // Taking input
    printf("Enter ID: ");
    scanf("%d", &s->id);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    // Printing details
    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);

    // Free memory
    free(s);

    return 0;
}
