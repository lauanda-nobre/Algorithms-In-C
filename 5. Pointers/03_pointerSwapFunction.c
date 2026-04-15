/*
 Name: Pointer Swap Function
 Author: Lauanda Nobre
 Date: 04/15/2026
 Purpose: Swap two variables using pointers
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    
    printf("--- Pointer Swap Function ---\n\n");
    
    printf("Before swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);
    
    swap(&x, &y);
    
    printf("After swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
