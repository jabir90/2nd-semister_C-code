#include <stdio.h>

// Function to check vowel or consonant
void checkChar(char ch) {
    // Convert uppercase to lowercase manually (optional)
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkChar(ch);

    return 0;
}
