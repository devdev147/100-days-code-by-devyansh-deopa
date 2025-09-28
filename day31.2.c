//Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = 5; // Number of elements in the array

    // Reverse the array in place
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("The reversed array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}