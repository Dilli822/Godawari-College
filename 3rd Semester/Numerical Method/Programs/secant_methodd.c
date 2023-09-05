#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x + cos(x) - exp(-x) - 2;
}

int main() {
    double x0, x1, x2, epsilon;
    int maxIterations;

    // Initial guesses x0 and x1
    printf("Enter initial guess x0: ");
    scanf("%lf", &x0);
    printf("Enter initial guess x1: ");
    scanf("%lf", &x1);

    // Stopping criteria (epsilon) and maximum iterations
    printf("Enter stopping criteria (epsilon): ");
    scanf("%lf", &epsilon);
    printf("Enter maximum number of iterations: ");
    scanf("%d", &maxIterations);

    // Perform secant iterations
    int iteration = 0;
    do {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));
        
        // Update x0 and x1 for the next iteration
        x0 = x1;
        x1 = x2;

        // Print iteration details
        printf("Iteration %d: x = %.6lf, f(x) = %.6lf\n", iteration, x2, f(x2));

        iteration++;
    } while (fabs(f(x2)) > epsilon && iteration < maxIterations);

    // Print the final root approximation
    printf("Approximate root: %.6lf\n", x2);

    return 0;
}
