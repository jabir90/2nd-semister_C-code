// C code to Find prime number.
#include <stdio.h>

int main()
{
    int num, i, verify = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        verify = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                verify = 0;
                break;
            }
        }
    }

    if (verify == 1)
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is NOT a Prime Number\n", num);

    return 0;
}
