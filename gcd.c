#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
