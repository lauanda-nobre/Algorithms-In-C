/*
 Name: Array Sum and Average
 Author: Lauanda Nobre
 Date: 03/13/2026
 Purpose: Calculate sum and average of array elements
*/

#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int i;
    int sum = 0;
    float average;
    
    printf("--- Array Sum and Average ---\n\n");
    
    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    average = (float)sum / SIZE;
    
    printf("\n--- Results ---\n");
    printf("Array elements: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\nSum of elements: %d\n", sum);
    printf("Average: %.2f\n", average);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
