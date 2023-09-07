#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    if ((n - 1) % 3 != 0) {
        printf("Simpson's 3/8 rule requires that (n - 1) is a multiple of 3.\n");
        return 1;
    }

    double x[n], fx[n];
    double h, integral;

    printf("Enter the data points:\n");
    for (int i = 0; i < n; i++) {
        printf("Data point %d:\n", i + 1);
        printf("x%d: ", i + 1);
        scanf("%lf", &x[i]);
        printf("f(x%d): ", i + 1);
        scanf("%lf", &fx[i]);
    }

    // Calculate the integral using Simpson's 3/8 rule
    h = (x[n - 1] - x[0]) / (n - 1);
    integral = fx[0] + fx[n - 1]; // Initialize with the first and last points

    for (int i = 1; i < n - 1; i++) {
        if (i % 3 == 0) {
            integral += 2 * fx[i];
        } else {
            integral += 3 * fx[i];
        }
    }

    integral *= 3 * h / 8.0;

    printf("The estimated integral is: %.6lf\n", integral);

    return 0;
}