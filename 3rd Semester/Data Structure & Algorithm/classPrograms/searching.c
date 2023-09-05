#include<stdio.h>

int binarySearch(int arr[], int size, int element) {
  int low, mid, high;
  low = 0;
  high = size - 1;
  // keep searching untill low <= high
  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == element) {
      return mid;
    }
    if (arr[mid] < element) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {34, 7, 13, 4, 7, 344};
  // sorted array for binary search
  int size = sizeof(arr) / sizeof(int);
  int element = 344;
  int searchIndex = binarySearch(arr, size, element);

  if (searchIndex == -1) {
    printf("The element %d was not found.", element);
  } else {
    printf("The element %d was found at %d index.", element, searchIndex);
  }
  return 0;
}