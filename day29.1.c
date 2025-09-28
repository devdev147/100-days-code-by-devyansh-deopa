//Find the sum of array elements.
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = 5; // Number of elements in the array
    int sum = 0;

    // Calculate the sum of array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}