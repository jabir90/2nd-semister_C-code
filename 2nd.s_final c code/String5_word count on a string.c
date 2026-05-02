#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // check start of a word
        if ((str[i] != ' ' && str[i] != '\n') &&
            (i == 0 || str[i-1] == ' ' || str[i-1] == '\n')) {
            count++;
        }
        i++;
    }

    printf("Total words = %d\n", count);

    return 0;
}
