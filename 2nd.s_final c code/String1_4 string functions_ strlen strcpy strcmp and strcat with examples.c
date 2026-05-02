// 4 string functions: strlen, strcpy, strcmp, and strcat with examples
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];

    // Input strings
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // 1. strlen(): string length count kore
    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    // 2. strcpy(): ekta string onno string e copy kore
    strcpy(str3, str1);
    printf("After copying, str3 = %s", str3);

    // 3. strcmp():compare kore (0 hole equal)
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");
    }

    // 4. strcat():str2 ke str1 er sheshe add kore
    strcat(str1, str2);
    printf("After concatenation (str1 + str2): %s", str1);

    return 0;
}
