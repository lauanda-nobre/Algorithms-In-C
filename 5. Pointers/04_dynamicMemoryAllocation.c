/*
 Name: Dynamic Memory Allocation
 Author: Lauanda Nobre
 Date: 04/15/2026
 Purpose: Demonstrate dynamic memory allocation with pointers
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size;
    int i;
    int sum = 0;
    
    printf("--- Dynamic Memory Allocation ---\n\n");
    
    printf("Enter the number of integers to allocate: ");
    scanf("%d", &size);
    
    ptr = (int *)malloc(size * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
    
    printf("\n--- Results ---\n");
    printf("Numbers entered: ");
    for (i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / size);
    
    free(ptr);
    printf("\nMemory freed successfully!\n");
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
