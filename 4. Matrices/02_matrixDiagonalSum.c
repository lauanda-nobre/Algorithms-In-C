/*
 Name: Matrix Diagonal Sum
 Author: Lauanda Nobre
 Date: 03/20/2026
 Purpose: Calculate the sum of the diagonals of a matrix
*/

#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE];
    int i, j;
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    
    printf("--- Matrix Diagonal Sum ---\n\n");
    printf("Enter %d numbers for a %d x %d matrix:\n\n", SIZE * SIZE, SIZE, SIZE);
    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (i = 0; i < SIZE; i++) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][SIZE - 1 - i];
    }
    
    printf("\n--- Matrix ---\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMain diagonal sum: %d\n", mainDiagonalSum);
    printf("Secondary diagonal sum: %d\n", secondaryDiagonalSum);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
