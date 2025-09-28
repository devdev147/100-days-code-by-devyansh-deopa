//Insert an element in a sorted array at the appropriate position
#include <stdio.h>

int main() {
    int arr[100] = {1, 3, 5, 7, 9}; // sorted array
    int n = 5;  // current size
    int elem = 6; // element to insert
    int i, pos;

    // Find the correct position for elem
    for (i = 0; i < n; i++) {
        if (arr[i] > elem) {
            break;
        }
    }
    pos = i;

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
