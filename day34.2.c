//Delete an element from an array.
#include <stdio.h>
int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // initial array
    int n = 5;  // current size
    int elem = 3; // element to delete
    int i, pos = -1;

    // Find the position of the element to delete
    for (i = 0; i < n; i++) {
        if (arr[i] == elem) {
            pos = i;
            break;
        }
    }

    // If element not found
    if (pos == -1) {
        printf("Element not found!\n");
        return 0;
    }

    // Shift elements to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // decrease size

    // Print updated array
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}