/*
 Name: Basic Pointer Operations
 Author: Lauanda Nobre
 Date: 04/10/2026
 Purpose: Demonstrate basic pointer operations and memory addresses
*/

#include <stdio.h>

int main() {
    int number = 42;
    int *ptr = &number;
    int *ptr2;
    
    printf("--- Basic Pointer Operations ---\n\n");
    
    printf("Variable number: %d\n", number);
    printf("Address of number: %p\n", (void*)&number);
    printf("Pointer ptr value: %p\n", (void*)ptr);
    printf("Dereferenced ptr: %d\n", *ptr);
    
    printf("\nModifying value through pointer:\n");
    *ptr = 100;
    printf("New number value: %d\n", number);
    
    printf("\nPointer to pointer:\n");
    ptr2 = ptr;
    printf("ptr2 points to: %p\n", (void*)ptr2);
    printf("Dereferenced ptr2: %d\n", *ptr2);
    
    printf("\nPointer arithmetic:\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
