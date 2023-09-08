#include <stdio.h>

// Function to calculate factorial
double factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double xp, h, s;
    double x[n], fx[n], fd[n];

    // Read the value at which interpolation is needed
    printf("Enter the value at which interpolation is needed (xp): ");
    scanf("%lf", &xp);

    // Allow the user to input x and f(x) values separately
    printf("Enter the data points (x and f(x)) one by one:\n");

    for (int i = 0; i < n; i++) {
        printf("Enter x[%d]: ", i);
        scanf("%lf", &x[i]);
        printf("Enter f(x[%d]): ", i);
        scanf("%lf", &fx[i]);
    }

    // Calculate h and s
    h = x[1] - x[0];
    s = (xp - x[0]) / h;

    // Calculate the first forward differences
    for (int i = 0; i < n; i++) {
        fd[i] = fx[i];
    }

    // Calculate second to nth forward differences
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            fd[j] = fd[j] - fd[j - 1];
        }
    }

    // Perform interpolation
    double v = fd[0];
    double p = 1.0;

    for (int i = 1; i < n; i++) {
        for (int k = 1; k <= i; k++) {
            p = p * (s - k + 1);
        }
        v = v + (fd[i] * p) / factorial(i);
        p = 1.0;
    }

    // Print the interpolated value
    printf("Interpolated value at x = %.2lf: %.6lf\n", xp, v);

    return 0;
}
