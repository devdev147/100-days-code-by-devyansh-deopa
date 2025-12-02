#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq[26] = {0}, i;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // Count frequency from s1
    for(i = 0; s1[i] != '\0'; i++)
        freq[s1[i] - 'a']++;

    // Subtract frequency using s2
    for(i = 0; s2[i] != '\0'; i++)
        freq[s2[i] - 'a']--;

    // Check if all are zero
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
