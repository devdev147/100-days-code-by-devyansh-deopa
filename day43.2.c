#include <stdio.h>

int main() {
    char str[50];
    int i, j, flag = 1;

    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    // find length manually
    for (j = 0; str[j] != '\0'; j++);

    j = j - 1; // last index

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
