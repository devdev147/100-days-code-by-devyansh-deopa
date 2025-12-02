#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a word: ");
    scanf("%s", str);  // reads one word only (stops at space)

    // Count manually without strlen()
    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters in the word: %d\n", count);

    return 0;
}
