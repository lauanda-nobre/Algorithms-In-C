/*
 Name: Binary Matrix Generator
 Author: Lauanda Nobre
 Date: 03/20/2026
 Purpose: Create a matrix with 0s and 1s based on user-defined dimensions
*/

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int matrix[10][10];
    
    printf("--- Binary Matrix Generator ---\n\n");
    
    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);
    
    if (rows > 10 || cols > 10 || rows < 1 || cols < 1) {
        printf("Invalid dimensions! Rows and columns must be between 1 and 10.\n");
        printf("\nPress Enter to continue... ");
        getchar();
        return 0;
    }
    
    printf("\nGenerating %d x %d matrix with 0s and 1s:\n\n", rows, cols);
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrix[i][j] = (i + j) % 2;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
