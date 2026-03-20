/*
 Name: Matrix Sum All Elements
 Author: Lauanda Nobre
 Date: 03/20/2026
 Purpose: Calculate the sum of all elements in a matrix
*/

#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int matrix[ROWS][COLS];
    int i, j;
    int sum = 0;
    
    printf("--- Matrix Sum All Elements ---\n\n");
    printf("Enter %d numbers for a %d x %d matrix:\n\n", ROWS * COLS, ROWS, COLS);
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    
    printf("\n--- Matrix ---\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSum of all elements: %d\n", sum);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
