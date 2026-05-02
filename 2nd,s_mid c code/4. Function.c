// Basic function creasion.
#include <stdio.h>

void area(float a, float b);

int main()
{
    int a, b;
    printf("Enter lanth and width value: ");
    scanf("%d %d", &a, &b);
    area(a, b);
    return 0;
}
void area(float a, float b)
{
    int sum;
    sum = a * b;
    printf("The area of a ractangle is: %d", sum);
}
