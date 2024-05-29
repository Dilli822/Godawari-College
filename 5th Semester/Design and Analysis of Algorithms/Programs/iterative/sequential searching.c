#include <stdio.h>

// Function to perform a sequential search
int sequentialSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Element found, return its index
        }
    }
    return -1;  // Element not found, return -1
}

int main() {
    int n, target;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform the sequential search
    int result = sequentialSearch(arr, n, target);

    // Print the result
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}


// o(n) 