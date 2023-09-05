#include <stdio.h>

// Define maximum number of data points
#define MAX_POINTS 10

// Data structure to hold (x, y) points
struct DataPoint {
    double x;
    double y;
};

// Function to perform cubic spline interpolation
void cubicSplineInterpolation(struct DataPoint data[], int n, double interp_x) {
    double h[n - 1];
    double alpha[n - 1];
    double l[n];
    double mu[n - 1];
    double z[n];

    for (int i = 0; i < n - 1; i++) {
        h[i] = data[i + 1].x - data[i].x;
        alpha[i] = (3.0 / h[i]) * (data[i + 1].y - data[i].y) -
                   (3.0 / h[i - 1]) * (data[i].y - data[i - 1].y);
    }

    l[0] = 1.0;
    mu[0] = 0.0;
    z[0] = 0.0;

    for (int i = 1; i < n - 1; i++) {
        l[i] = 2.0 * (data[i + 1].x - data[i - 1].x) - h[i - 1] * mu[i - 1];
        mu[i] = h[i] / l[i];
        z[i] = (alpha[i] - h[i - 1] * z[i - 1]) / l[i];
    }

    l[n - 1] = 1.0;
    z[n - 1] = 0.0;
    double c[n], b[n], d[n];
    c[n - 1] = 0.0;

    for (int j = n - 2; j >= 0; j--) {
        c[j] = z[j] - mu[j] * c[j + 1];
        b[j] = (data[j + 1].y - data[j].y) / h[j] -
               h[j] * (c[j + 1] + 2.0 * c[j]) / 3.0;
        d[j] = (c[j + 1] - c[j]) / (3.0 * h[j]);
    }

    // Print an iteration table-like output for coefficients
    printf("Segment\t   a\t\t   b\t\t   c\t\t   d\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%7d\t%10.6lf\t%10.6lf\t%10.6lf\t%10.6lf\n", i, data[i].y, b[i], c[i], d[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (interp_x >= data[i].x && interp_x <= data[i + 1].x) {
            double dx = interp_x - data[i].x;
            double interpolated_y =
                data[i].y + b[i] * dx + c[i] * dx * dx + d[i] * dx * dx * dx;

            printf("\nInterpolated value at %.2lf: %.4lf\n", interp_x, interpolated_y);
            return;
        }
    }

    printf("\nInterpolation value not in the given range.\n");
}

int main() {
    int n; // Number of data points
    struct DataPoint data[MAX_POINTS]; // Array to store data points
    double x_interp; // Value for interpolation

    printf("Enter the number of data points (max %d): ", MAX_POINTS);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_POINTS) {
        printf("Invalid number of data points.\n");
        return 1;
    }

    // Input data points
    for (int i = 0; i < n; i++) {
        printf("Enter x[%d]: ", i);
        scanf("%lf", &data[i].x);
        printf("Enter y[%d]: ", i);
        scanf("%lf", &data[i].y);
    }

    printf("Enter the value for interpolation: ");
    scanf("%lf", &x_interp);

    // Perform cubic spline interpolation
    cubicSplineInterpolation(data, n, x_interp);

    return 0;
}
