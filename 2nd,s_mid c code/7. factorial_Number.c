// C code to find factorial of a number.
#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf(" %d", &n);
    if (n < 0)
    {
        printf("Factorial is not possible for negative number!");
    }
    else if (n == 0)
    {
        printf("0 factorial is= 1");
    }
    else
    {
        int i = 1;
        while (i <= n)
        {
            factorial = factorial * i;
            i++;
        }
        printf("factorial value is= %d", factorial);
    }
    return 0;
}