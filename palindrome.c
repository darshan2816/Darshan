#include <stdio.h>

int main()
{
    int num, reversed = 0, rem, original;
    printf("enter the number int:");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }
    if (reversed == original) {
        printf("the number is palidr");
    } else {
        printf("the number is not palindrome");
    }
    return 0;
}