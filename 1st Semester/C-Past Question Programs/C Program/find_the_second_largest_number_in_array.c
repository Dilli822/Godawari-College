#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int largest = arr[0];  // Assume the first element is the largest
    int secondLargest = arr[0];  // Assume the first element is also the second largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int secondLargest = findSecondLargest(numbers, size);

    printf("The second largest number is: %d\n", secondLargest);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[100]; // Assuming the array can hold up to 100 elements
    int size, i;
    int max, secondMax;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0]; // Initialize the maximum and second maximum to the first element
    
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    
    printf("The second largest number in the array is: %d\n", secondMax);
    
    return 0;
}
