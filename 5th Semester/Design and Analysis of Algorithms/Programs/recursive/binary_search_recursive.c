#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Target is not present in the array
    }

    int mid = left + (right - left) / 2;

    // Check if the target is present at mid
    if (arr[mid] == target) {
        return mid;
    }
    // If the target is smaller than mid, it can only be present in the left subarray
    else if (arr[mid] > target) {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
    // Otherwise, the target can only be present in the right subarray
    else {
        return binarySearchRecursive(arr, mid + 1, right, target);
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }

    return 0;
}
