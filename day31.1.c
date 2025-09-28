//Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int arr[] = {4, 2, 7, 1, 9}; // Example array
    int n = 5; // Number of elements in the array
    int target = 7; // Element to search for
    int found = 0; // Flag to indicate if the element is found

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1; // Element found
            break;
        }
    }

    if (found) {
        printf("Element %d is present in the array.\n", target);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}