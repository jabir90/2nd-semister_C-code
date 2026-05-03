#include <stdio.h>

// Function to check leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;   // Leap year
    else
        return 0;   // Not leap year
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    return 0;
}
