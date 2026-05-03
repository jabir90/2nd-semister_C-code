//compare two strings without using strcmp()
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, Test = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Compare character by character
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            Test = 1;
            break;
        }
        i++;
    }

    if (Test == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
