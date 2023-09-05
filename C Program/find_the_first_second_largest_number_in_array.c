#include <stdio.h>

int main() {
    int arr[100]; // Assuming the array can hold up to 100 elements
    int size, i;
    int firstMax, secondMax;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    firstMax = arr[0]; // Initialize the first and second maximum to the first element
    secondMax = arr[1];
    
    if (firstMax < secondMax) {
        int temp = firstMax;
        firstMax = secondMax;
        secondMax = temp;
    }
    
    for (i = 2; i < size; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] < firstMax) {
            secondMax = arr[i];
        }
    }
    
    printf("The first largest number in the array is: %d\n", firstMax);
    printf("The second largest number in the array is: %d\n", secondMax);
    
    return 0;
}
