#include <stdio.h>

unsigned long long factorial(int number) {
    unsigned long long result = 1;

    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    unsigned long long fact = factorial(number);

    printf("The factorial of %d is: %llu\n", number, fact);

    return 0;
}
