#include <stdio.h>

void printNumbers1(int n) {
  // Recursive function print 1 to n
    if (n == 0)
        return;   // Base case

    printNumbers1(n - 1);  // Recursive call
    printf("%d ", n);     // Print after recursion
}
void printNumbers2(int n) {
    // Recursive function print n to 1
    if (n == 0)
        return;   // Base case

    printf("%d ", n);        // Print current number
    printNumbers2(n - 1);    // Recursive call
}
void printNumbers3(int n) {
   // Enter 1 print 1 to 10
    if (n > 10) {
        printf("Job successfully done\n");
        return;
    }
    printf("%d\n", n);
    printNumbers3(n + 1);
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printNumbers3(num);

    return 0;
}
