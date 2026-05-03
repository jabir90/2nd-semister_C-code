//finding sum of numbers from 1 to n using recursion
#include <stdio.h>

// Recursive function to calculate sum
int sum(int n) {
    if (n == 0)
        return 0;   // Base case

    return n + sum(n - 1);  // Recursive case
}

int main() {
    int n, result;

    printf("Enter n: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum = %d\n", result);

    return 0;
}
