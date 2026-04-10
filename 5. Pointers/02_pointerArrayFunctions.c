/*
 Name: Pointer Array and Functions
 Author: Lauanda Nobre
 Date: 04/10/2026
 Purpose: Demonstrate pointers with arrays and functions
*/

#include <stdio.h>

void modifyArray(int *arr, int size, int value) {
    int i;
    for (i = 0; i < size; i++) {
        arr[i] = value + i;
    }
}

int sumArray(int *arr, int size) {
    int i;
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[5];
    int i;
    int total;
    
    printf("--- Pointer Array and Functions ---\n\n");
    
    printf("Initializing array through pointer:\n");
    modifyArray(numbers, 5, 10);
    
    printf("Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    total = sumArray(numbers, 5);
    printf("Sum of array elements: %d\n", total);
    
    printf("\nAccessing array through pointer arithmetic:\n");
    int *ptr = numbers;
    printf("First element via pointer: %d\n", *ptr);
    printf("Second element via pointer: %d\n", *(ptr + 1));
    printf("Third element via pointer: %d\n", *(ptr + 2));
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
