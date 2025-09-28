#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;  // element to search
    int low = 0, high = n - 1, mid;
    int found = -1;  // -1 means not found

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;  // index where element is found
            break;
        } else if (arr[mid] > key) {
            high = mid - 1;  // search left half
        } else {
            low = mid + 1;   // search right half
        }
    }

    if (found != -1)
        printf("Element %d found at index %d\n", key, found);
    else
        printf("Element %d not found\n", key);

    return 0;
}
