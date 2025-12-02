#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if exists
    for(i = 0; str[i]; i++) {
        if(str[i] == '\n')
            str[i] = '\0';
    }

    // Print all substrings
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i; str[j] != '\0'; j++) {
            // Print characters from i to j
            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
