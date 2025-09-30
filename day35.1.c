//Find the second largest element in an array using binary search
#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize
    largest = secondLargest = -2147483648;  // Smallest int

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648)
        printf("No second largest element (all elements may be equal).\n");
    else
        printf("Second Largest Element: %d\n", secondLargest);

    return 0;
}
