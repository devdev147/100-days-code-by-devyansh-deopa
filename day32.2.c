#include <stdio.h>

int main() {
    // Given array of digits
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int freq[10] = {0}; // count digits 0–9
    int i, maxDigit = 0;

    // Count frequency
    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find digit with max frequency
    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit that occurs most: %d\n", maxDigit);
    printf("Frequency: %d\n", freq[maxDigit]);

    return 0;
}
