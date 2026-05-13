/*
Define a structure named Student with the
following members: name, roll, and marks. Write a C program to:
1. Take input for 3 students using the structure.
2. Display the details of the student who has obtained the highest marks.
*/
#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];
    int i, maxIndex = 0;

    // Input details of 3 students
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    for(i = 1; i < 3; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Display result
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll: %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
