#include <stdio.h>

int main() {
    int a, b;

    // Ask user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Compare the two numbers using if-else
    if (a > b) {
        printf("The largest number is: %d\n", a);
    } else if (b > a) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}