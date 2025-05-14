#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}