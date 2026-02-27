/*
 Name: Pointer Function
 Author: Lauanda Nobre
 Date: 02/27/2026
 Purpose: Demonstrate function with pointer to modify variable in main
*/

#include <stdio.h>

void modifyValue(int *ptr) {
    printf("Address received in function: %p\n", (void*)ptr);
    printf("Value before modification: %d\n", *ptr);
    *ptr = *ptr * 2;
    printf("Value after modification: %d\n", *ptr);
}

int main() {
    int number = 10;
    
    printf("--- Pointer Function ---\n\n");
    printf("Original value: %d\n", number);
    printf("Address of number: %p\n\n", (void*)&number);
    
    printf("Calling modifyValue(&number):\n");
    modifyValue(&number);
    
    printf("\nBack in main - number is now: %d\n", number);
    printf("This shows the function modified the original variable!\n");
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
