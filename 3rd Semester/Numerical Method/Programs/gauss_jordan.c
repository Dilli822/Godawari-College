#include <stdio.h>

#define N 3 // Size of the matrix A

// Function to print a matrix
void printMatrix(double matrix[N][N + 1]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + 1; j++) {
            printf("%10.4lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform Gauss-Jordan Elimination
void gaussJordanElimination(double A[N][N + 1]) {
    printf("\nGauss-Jordan Elimination Steps:\n\n");

    for (int i = 0; i < N; i++) {
        double pivot = A[i][i];

        // Divide the current row by the pivot
        for (int j = i; j < N + 1; j++) {
            A[i][j] /= pivot;
        }

        // Eliminate non-pivot entries in other rows
        for (int k = 0; k < N; k++) {
            if (k != i) {
                double factor = A[k][i];

                for (int j = i; j < N + 1; j++) {
                    A[k][j] -= factor * A[i][j];
                }
            }
        }

        printf("Step %d:\n", i + 1);
        printMatrix(A);
        printf("\n");
    }

    printf("Gauss-Jordan Elimination Completed:\n");
    printMatrix(A);
    printf("\n");
}

int main() {
    double A[N][N + 1]; // Augmented matrix

    printf("Gauss-Jordan Elimination Method\n");

    // Input augmented matrix
    printf("Enter the augmented matrix A (%dx%d+1):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%lf", &A[i][j]);
        }
        printf("Enter the b vector element for row %d: ", i);
        scanf("%lf", &A[i][N]);
    }

    // Perform Gauss-Jordan Elimination
    gaussJordanElimination(A);

    printf("\nSolution vector:\n");
    for (int i = 0; i < N; i++) {
        printf("x[%d] = %.6lf\n", i, A[i][N]);
    }

    return 0;
}
