#include <stdio.h>

// Define the function f(x, y) = 3x - x^2y
double f(double x, double y) {
    return 3 * x - x * x * y;
}

int main() {
    double x0 = 1.0;     // Initial value of x
    double y0 = 1.0;     // Initial value of y
    double h = 0.25;     // Step size
    double x, y, m1, m2;

    printf("x\t\t y\n");
    printf("%.2lf\t%.4lf\n", x0, y0);

    for (x = x0 + h; x <= 2.0; x += h) {
        // Predictor step
        m1 = f(x0, y0);
        double y1_pred = y0 + h * m1;

        // Corrector step
        m2 = f(x, y1_pred);
        y = y0 + 0.5 * h * (m1 + m2);

        printf("%.2lf\t%.4lf\n", x, y);

        // Update for the next iteration
        x0 = x;
        y0 = y;
    }

    return 0;
}
