#include <stdio.h>

int sumOfDigits(int number) {
    if (number == 0) {
        return 0;
    } else {
        return (number % 10) + sumOfDigits(number / 10);
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);

    printf("Sum of digits: %d\n", sum);

    return 0;
}
