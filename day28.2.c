#include <stdio.h>

int main() {
    // Given array with known number of elements
    int arr[] = {10, 20, 30, 40, 50};
    
    int n = 5; // manually set number of elements

    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
