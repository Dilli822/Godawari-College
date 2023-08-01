#include <stdio.h>

void main() {
    float x[100], y[100], sumx = 0, sumx2 = 0, sumy = 0, sumxy = 0, b, a;
    int n;
    printf("Enter the number of data: ");
    scanf("%d", &n);
    
    printf("Enter the values:\n");

    // Taking the values
    for (int i = 0; i < n; i++) {
        printf("Enter the value of x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("Enter the value of y[%d]: ", i);
        scanf("%f", &y[i]);
    }

    // Calculation of sumx, sumx2, sumy, sumy2, and sumxy
    for (int i = 0; i < n; i++) {
        sumx += x[i];
        sumx2 += x[i] * x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
    }

    // For y = ax + b
    b = (sumxy * n - sumx * sumy) / (n * sumx2 - sumx * sumx);
    a = (sumy - b * sumx) / n;

    printf("The obtained values are a = %f and b = %f\n", a, b);
    printf("The required equation is Y = %fx + %f\n", a, b);
}
