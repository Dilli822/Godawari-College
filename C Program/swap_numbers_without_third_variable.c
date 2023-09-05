#include <stdio.h>

void swap(long long int *a, long long int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    long long int num1 = 23423423420000LL;
    long long int num2 = 234234234234234LL;

    printf("Before swapping: num1 = %lld, num2 = %lld\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %lld, num2 = %lld\n", num1, num2);

    return 0;
}