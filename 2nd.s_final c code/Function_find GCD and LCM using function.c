// find GCD and LCM using functions
#include <stdio.h>

// Function to find GCD (using Euclidean algorithm)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int g = gcd(num1, num2);
    int l = lcm(num1, num2);

    printf("GCD = %d\n", g);
    printf("LCM = %d\n", l);

    return 0;
}
