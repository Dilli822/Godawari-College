#include <stdio.h>

// Function to perform binary search on an array of integers
int binarySearch(int arr[], int size, int element) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == element) {
            return mid;  // Element found, return its index
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Element not found
}

int main() {
    // Example sorted array of integers
    int arr[] = {2, 3, 4, 10, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Element to search for
    int element = 10;

    // Perform the binary search
    int result = binarySearch(arr, size, element);

    // Print the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", element, result);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
