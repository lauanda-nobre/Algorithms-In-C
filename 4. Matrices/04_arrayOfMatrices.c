/*
 Name: Array of Matrices
 Author: Lauanda Nobre
 Date: 03/20/2026
 Purpose: Create an array of 4 matrices with 4x4 dimensions
*/

#include <stdio.h>

#define MATRIX_COUNT 4
#define ROWS 4
#define COLS 4

int main() {
    int matrices[MATRIX_COUNT][ROWS][COLS];
    int m, i, j;
    int number = 1;
    
    printf("--- Array of Matrices ---\n\n");
    printf("Creating %d matrices of %d x %d dimensions\n\n", MATRIX_COUNT, ROWS, COLS);
    
    for (m = 0; m < MATRIX_COUNT; m++) {
        printf("Matrix %d:\n", m + 1);
        for (i = 0; i < ROWS; i++) {
            for (j = 0; j < COLS; j++) {
                printf("Position [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrices[m][i][j]);
            }
        }
        printf("\n");
    }
    
    printf("\n--- All Matrices ---\n\n");
    
    for (m = 0; m < MATRIX_COUNT; m++) {
        printf("Matrix %d:\n", m + 1);
        for (i = 0; i < ROWS; i++) {
            for (j = 0; j < COLS; j++) {
                printf("%d ", matrices[m][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    printf("Press Enter to continue... ");
    getchar();
    return 0;
}
