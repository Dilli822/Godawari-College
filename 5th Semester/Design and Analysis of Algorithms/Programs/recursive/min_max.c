#include <stdio.h>

// Function to find the minimum element in the array using recursion
int findMin(int arr[], int n) {
    // Base case: If there is only one element
    if (n == 1) {
        return arr[0];
    }
    // Recursive case: Compare the last element with the minimum of the rest
    int min = findMin(arr, n - 1);
    return (arr[n - 1] < min) ? arr[n - 1] : min;
}

// Function to find the maximum element in the array using recursion
int findMax(int arr[], int n) {
    // Base case: If there is only one element
    if (n == 1) {
        return arr[0];
    }
    // Recursive case: Compare the last element with the maximum of the rest
    int max = findMax(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int main() {
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, n);
    int max = findMax(arr, n);

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    return 0;
}

