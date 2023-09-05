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

// Function to perform Gaussian Elimination
void gaussianElimination(double A[N][N + 1]) {
    printf("\nGaussian Elimination Steps:\n\n");
    
    for (int i = 0; i < N - 1; i++) {
        printf("Step %d:\n", i + 1);
        printMatrix(A);
        
        for (int k = i + 1; k < N; k++) {
            double factor = A[k][i] / A[i][i];
            
            for (int j = i; j < N + 1; j++) {
                A[k][j] -= factor * A[i][j];
            }
        }
        
        printf("\n");
    }
    
    printf("Gaussian Elimination Completed:\n");
    printMatrix(A);
    printf("\n");
}

// Function to perform Back Substitution
void backSubstitution(double A[N][N + 1], double x[N]) {
    for (int i = N - 1; i >= 0; i--) {
        x[i] = A[i][N];
        
        for (int j = i + 1; j < N; j++) {
            x[i] -= A[i][j] * x[j];
        }
        
        x[i] /= A[i][i];
    }
}

int main() {
    double A[N][N + 1]; // Augmented matrix
    double x[N]; // Solution vector
    
    printf("Gaussian Elimination Method\n");
    
    // Input augmented matrix and vector b
    printf("Enter the augmented matrix A (%dx%d+1):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%lf", &A[i][j]);
        }
        printf("Enter the b vector element for row %d: ", i);
        scanf("%lf", &A[i][N]);
    }
    
    // Perform Gaussian Elimination
    gaussianElimination(A);
    
    // Perform Back Substitution
    backSubstitution(A, x);
    
    // Output the solution vector
    printf("\nSolution vector:\n");
    for (int i = 0; i < N; i++) {
        printf("x[%d] = %.6lf\n", i, x[i]);
    }
    
    return 0;
}
