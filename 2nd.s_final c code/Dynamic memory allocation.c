#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    //malloc - Memory allocate kore but initialize kore na (garbage value thake).
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter %d elements (malloc):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements using malloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // calloc - Memory allocate kore + shob value 0 diye initialize kore.
    int *arr2;
    arr2 = (int *) calloc(n, sizeof(int));

    if (arr2 == NULL) {
        printf("\nCalloc allocation failed!\n");
        return 1;
    }

    printf("\n\nArray elements using calloc (default 0):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    // realloc - Agher memory size change kore (increase ba decrease).
    int newSize;
    printf("\n\nEnter new size for realloc: ");
    scanf("%d", &newSize);

    arr = (int *) realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Realloc failed!\n");
        return 1;
    }

    printf("\nEnter %d elements after realloc:\n", newSize);
    for(i = n; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated array after realloc:\n");
    for(i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // free - Allocate kora memory release kore (na korle memory leak hobe).
    free(arr);
    free(arr2);

    printf("\n\nMemory freed successfully.\n");

    return 0;
}
