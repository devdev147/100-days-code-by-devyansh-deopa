//Merge two arrays.
#include <stdio.h>  
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    
    // Copy elements of arr1 to merged
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    
    // Copy elements of arr2 to merged
    for (int j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }
    
    // Print merged array
    printf("Merged array: ");
    for (int k = 0; k < n1 + n2; k++) {
        printf("%d ", merged[k]);
    }
    
    return 0;
}