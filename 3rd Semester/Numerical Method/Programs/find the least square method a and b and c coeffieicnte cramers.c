#include <stdio.h>

int main() {
    double a, b, c;

    // Define the coefficients and right-hand sides
    double coefficients[3][3] = {
        {7.0, 17.5, 50.75},
        {17.5, 50.75, 161.875},
        {50.75, 161.875, 548.1875}
    };

    double rhs[3] = {66.0, 203.15, 675.325};

    // Calculate the determinant of the coefficient matrix
    double detA = coefficients[0][0] * (coefficients[1][1] * coefficients[2][2] - coefficients[1][2] * coefficients[2][1])
                 - coefficients[0][1] * (coefficients[1][0] * coefficients[2][2] - coefficients[1][2] * coefficients[2][0])
                 + coefficients[0][2] * (coefficients[1][0] * coefficients[2][1] - coefficients[1][1] * coefficients[2][0]);

    if (detA == 0) {
        printf("The system of equations has no unique solution (determinant is zero).\n");
        return 1;
    }

    // Calculate the determinants for a, b, and c
    double detAa = rhs[0] * (coefficients[1][1] * coefficients[2][2] - coefficients[1][2] * coefficients[2][1])
                 - coefficients[0][1] * (rhs[1] * coefficients[2][2] - coefficients[1][2] * rhs[2])
                 + coefficients[0][2] * (rhs[1] * coefficients[2][1] - coefficients[1][1] * rhs[2]);

    double detAb = coefficients[0][0] * (rhs[1] * coefficients[2][2] - coefficients[1][2] * rhs[2])
                 - rhs[0] * (coefficients[1][0] * coefficients[2][2] - coefficients[1][2] * coefficients[2][0])
                 + coefficients[0][2] * (coefficients[1][0] * rhs[2] - rhs[1] * coefficients[2][0]);

    double detAc = coefficients[0][0] * (coefficients[1][1] * rhs[2] - rhs[1] * coefficients[2][1])
                 - coefficients[0][1] * (coefficients[1][0] * rhs[2] - rhs[1] * coefficients[2][0])
                 + rhs[0] * (coefficients[1][0] * coefficients[2][1] - coefficients[1][1] * coefficients[2][0]);

    // Calculate the values of a, b, and c
    a = detAa / detA;
    b = detAb / detA;
    c = detAc / detA;

    // Print the solution
    printf("Solution:\n");
    printf("a = %.4lf\n", a);
    printf("b = %.4lf\n", b);
    printf("c = %.4lf\n", c);

    return 0;
}
