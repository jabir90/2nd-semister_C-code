#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i] == '\n') {
            printf("\n");   // new line when space or end
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}
