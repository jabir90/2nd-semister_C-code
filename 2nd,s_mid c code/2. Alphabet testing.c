// lowercase alphabets and uppercase alphabets indetyping
#include <stdio.h>

int main()
{
    int choice;
    printf("Enter 1 for lowercase alphabets or 2 for uppercase alphabets: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // lowercase alphabets
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            printf("%c ", ch);
        }
    }
    else if (choice == 2)
    {
        // uppercase alphabets
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            printf("%c ", ch);
        }
    }
    else
    {
        printf("Invalid input! Please enter 1 or 2.\n");
    }

    return 0;
}
