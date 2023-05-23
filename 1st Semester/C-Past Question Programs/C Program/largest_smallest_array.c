#include <stdio.h>

int main() {
    int arr[] = {90,123,23232,23232,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = arr[0];
    int largest = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);
    
    return 0;
}
