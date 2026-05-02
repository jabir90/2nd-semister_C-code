// find GCD & LCM of two number using Euclidean algorithm.
#include <stdio.h>
int main()
{
    int num1, num2, n1, n2, remainder, gcd, lcm;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;
    while (n2 != 0)
    {
        remainder = n1 % n2; // using Euclidean algorithn
        n1 = n2;
        n2 = remainder;
    }
    gcd = n1;
    lcm = (num1 * num2) / gcd; // formula of lcm.

    printf("GCD of your two number is: %d\n", gcd);
    printf("LCM of your two number is: %d\n", lcm);
    return 0;
}
