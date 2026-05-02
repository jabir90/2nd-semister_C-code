#include <stdio.h>

int main() {
    int n, i, j, trace = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate trace
    for(i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    printf("Trace of matrix = %d\n", trace);

    return 0;
}
