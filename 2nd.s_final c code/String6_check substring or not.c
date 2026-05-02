#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int i, j, found = 0;

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);

    int len1 = strlen(str);
    int len2 = strlen(sub);

    for(i = 0; i <= len1 - len2; i++) {
        for(j = 0; j < len2; j++) {
            if(str[i + j] != sub[j]) {
                break;
            }
        }
        if(j == len2) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}
