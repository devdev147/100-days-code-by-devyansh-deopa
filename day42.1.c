#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;
    char ch;

    printf("Enter a word: ");
    scanf("%s", str);  // reads a single word (no spaces)

    while (str[i] != '\0') {
        ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (only alphabets)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
