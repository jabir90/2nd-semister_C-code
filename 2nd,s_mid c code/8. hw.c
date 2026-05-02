// 1. swap two number by a temporary variable
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a; // a ar man temp a raklam
    a = b;    // b ar man a te dilam
    b = temp; // temp ar man b te dilam

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// 2. swap two number without temporary variables help
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// 3. Reverse Number Series using Array (within the same array)
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int i, temp;

    printf("Before reverse: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // Reverse logic
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("After reverse: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

// 4. Reverse and put it in another array
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int rev[6];
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // Reverse into new array
    for (i = 0; i < n; i++)
    {
        rev[i] = arr[n - 1 - i];
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", rev[i]);
    }

    return 0;
}
// 5. C Code to Swap Two Arrays
#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n = 3;
    int i, temp;

    printf("Before swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("Array 2: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    // Swap logic
    for (i = 0; i < n; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("After swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("Array 2: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
