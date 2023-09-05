#include <stdio.h>
#include <math.h>

// Function to calculate the equation x^3 + 2x - cos(x) - 4
double equation(double x) {
    return x * x * x + 2 * x - cos(x) - 4;
}

// Function to perform the secant method to approximate a root
double secantMethod(double x0, double x1, double precision) {
    double x2, f0, f1, f2;
    int iteration = 0;

    printf("Iteration\t   x0\t\t   x1\t\t   x2\t\t   f(x2)\n");

    do {
        f0 = equation(x0);
        f1 = equation(x1);

        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);

        f2 = equation(x2);

        printf("%9d\t%10.6lf\t%10.6lf\t%10.6lf\t%10.6lf\n", iteration, x0, x1, x2, f2);

        x0 = x1;
        x1 = x2;
        iteration++;
    } while (fabs(f2) > precision);

    return x2;
}

int main() {
    double root;
    double x0 = 0.0; // Initial guess 1
    double x1 = 1.0; // Initial guess 2
    double precision = 0.01; // Desired precision

    root = secantMethod(x0, x1, precision);

    printf("Approximate root: %.4lf\n", root);

    return 0;
}
