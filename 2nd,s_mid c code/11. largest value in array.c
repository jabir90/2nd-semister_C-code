// findig largest value in array
#include <stdio.h>

int main()
{
    int arr[] = {10, 7, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    int largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}
