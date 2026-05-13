#include <stdio.h>

int main() {
    int r, c;
    int arr[10][10];

    // Input rows and columns
    printf("Enter number of rows and column : ");
    scanf("%d %d", &r, &c);

    // Input array elements
    printf("Enter array elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print array elements
    printf("\n2D Array Elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Finding total number of elements
    int totalElements = r * c;

    // Finding total size of array in bytes
    int totalSize = totalElements * sizeof(int);

    printf("Total Elements = %d\n", totalElements);
    printf("Total Size = %d bytes\n", totalSize);

    return 0;
}
