#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b; // b is the gcd
    } else if (b == 0) {
        return a; // a is the gcd
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1 = 24, num2 = 36;
    int result = gcd(num1, num2);
    printf("GCD is %d\n", result);

    return 0;
}
