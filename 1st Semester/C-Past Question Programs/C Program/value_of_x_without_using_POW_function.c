
#include <stdio.h>

int power(int x, int y) {
    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int main() {
    int x = 2;
    int y = 5;
    int result = power(x, y);
    printf("The result of %d raised to the power of %d is: %d\n", x, y, result);

    return 0;
}


#include <stdio.h>

int main() {
    int size = 5;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


void printSum(int a, int b) {
    int sum = a + b;
    printf("The sum is: %d\n", sum);
}


int main() {
    int num1 = 10;
    int num2 = 20;
    printSum(num1, num2);
    return 0;
}
