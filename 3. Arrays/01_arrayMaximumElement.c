/*
 Name: Array Maximum Element
 Author: Lauanda Nobre
 Date: 03/13/2026
 Purpose: Find the maximum element in an array
*/

#include <stdio.h>

int main() {
    int numbers[5];
    int i;
    int max;
    
    printf("--- Array Maximum Element ---\n\n");
    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    max = numbers[0];
    
    for (i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    printf("\nArray elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\nMaximum element: %d\n", max);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
