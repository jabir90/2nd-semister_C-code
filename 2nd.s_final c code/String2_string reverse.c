// string reverse
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    gets(str);   // taking input with gets

    len = strlen(str);

    // Reverse using your given condition
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reversed string: %s", rev);

    return 0;
}
