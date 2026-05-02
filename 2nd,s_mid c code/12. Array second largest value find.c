// Finding second largest value of array
#include <stdio.h>

int main()
{
    int arr[5] = {11, 7, 10, 9, 5,8};
    int i;
    int largest = arr[0];
    int second;

    for(i = 1; i < 4; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Second largest number = %d", second);

    return 0;
}
