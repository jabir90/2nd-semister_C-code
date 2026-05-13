#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters manually
    while (str[i] != '\0') {

        // Ignore newline character from fgets
        if (str[i] == '\n') {
            break;
        }

        i++;
    }

    printf("String Length = %d\n", i);

    return 0;
}
