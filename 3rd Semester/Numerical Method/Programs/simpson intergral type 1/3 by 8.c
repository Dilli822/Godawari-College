#include <stdio.h>
#include <math.h>

/* Define function here */
#define f(x) (1.0 / (1.0 + x * x))

int main() {
    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;

    /* Input */
    printf("Enter lower limit of integration: ");
    scanf("%f", &lower);
    printf("Enter upper limit of integration: ");
    scanf("%f", &upper);
    printf("Enter number of sub intervals (must be a multiple of 3): ");
    scanf("%d", &subInterval);

    if (subInterval % 3 != 0) {
        printf("The number of sub intervals must be a multiple of 3 for Simpson's 3/8 rule.\n");
        return 1;
    }

    /* Calculation */
    /* Finding step size */
    stepSize = (upper - lower) / subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);

    for (i = 1; i <= subInterval - 1; i++) {
        k = lower + i * stepSize;
        if (i % 3 == 0) {
            integration = integration + 2 * f(k);
        } else {
            integration = integration + 3 * f(k);
        }
    }

    integration = integration * 3 * stepSize / 8.0;

    printf("\nRequired value of integration is: %.6f", integration);

    return 0;
}
