//Insert an element in an array at a given position
#include <stdio.h>
int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // initial array
    int n = 5;  // current size
    int elem = 10; // element to insert
    int pos = 2; // position to insert (0-based index)
    int i;

    // Check if position is valid
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = elem;
    n++; // increase size

    // Print updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}