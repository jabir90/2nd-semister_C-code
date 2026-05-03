//print numbers from 1 to n using recursion
#include <stdio.h>

// Recursive function
void printNumbers(int n) {
    if (n == 0)
        return;   // Base case

    printNumbers(n - 1);  // Recursive call
    printf("%d ", n);     // Print after recursion
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printNumbers(n);

    return 0;
}
