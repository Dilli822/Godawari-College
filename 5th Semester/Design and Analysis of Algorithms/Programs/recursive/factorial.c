#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}
