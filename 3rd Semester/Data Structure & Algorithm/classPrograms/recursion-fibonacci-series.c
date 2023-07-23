#include <stdio.h>

void fibonacciSeries(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacciSeries(n - 1, b, a + b);
    }
}

int main() {
    int n = 10;
    printf("The Fibonacci series up to the %dth term is: ", n);
    fibonacciSeries(n, 0, 1);

    return 0;
}
