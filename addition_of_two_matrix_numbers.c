#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;
    
   
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    
    int a[rows][cols], b[rows][cols],            

    printf("Enter the elements of matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    
    printf("Enter the elements of matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
   
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
  
    printf("The sum of the matrices is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", c[i][j]); 
        }
        printf("\n"); // Print a new line after each row
    }
    
    return 0;
}