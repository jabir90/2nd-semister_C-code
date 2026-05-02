// Check palindrom serise
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int isPalindrome = 1;

    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
        printf("The series is Palindromic\n");
    else
        printf("The series is NOT Palindromic");

    return 0;
}
