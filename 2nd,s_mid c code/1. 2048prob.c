// 2048 problem (sum of all integer/digit for input number)
#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int digit;
    printf("Enter an integer number: ");
    scanf("%d", &i);

    for (; i > 0; i = i / 10)
    {
        digit = i % 10;
        sum = sum + digit;
    }

    printf("Sum of all digits: %d", sum);

    return 0;
}
