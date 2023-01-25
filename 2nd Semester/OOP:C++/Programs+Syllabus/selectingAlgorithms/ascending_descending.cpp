#include <iostream>
using namespace std;

void ascendingSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void descendingSort(int arr[], int n) {
    int i, j, maxIndex, temp;
    for (i = 0; i < n-1; i++) {
        maxIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    cout << arr;

    ascendingSort(arr, n);
    cout << "\nSorted array in ascending order: ";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";

    descendingSort(arr, n);
    cout << "\nSorted array in descending order: ";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
