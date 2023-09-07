#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Simpson's 1/3 rule requires an odd number of data points.\n");
        return 1;
    }

    double x[n], fx[n];
    double h, integral;

    printf("Enter the data points:\n");
    for (int i = 0; i < n; i++) {
        printf("x%d: ", i + 1);
        scanf("%lf", &x[i]);
        printf("f(x%d): ", i + 1);
        scanf("%lf", &fx[i]);
    }

    // Calculate the integral using Simpson's 1/3 rule
    h = (x[n - 1] - x[0]) / (n - 1);
    integral = fx[0] + fx[n - 1]; // Initialize with the first and last points

    for (int i = 1; i < n - 1; i++) {
        if (i % 2 == 1) {
            integral += 4 * fx[i];
        } else {
            integral += 2 * fx[i];
        }
    }

    integral *= h / 3.0;

    printf("The estimated integral is: %.6lf\n", integral);

    return 0;
}
