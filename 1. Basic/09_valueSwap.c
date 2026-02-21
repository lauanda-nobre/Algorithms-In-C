/*
 Name: Value Swap
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Swap two values using an auxiliary variable
*/

#include <stdio.h>

int main() {
    int value1;
    int value2;
    int aux;
    
    printf("Enter the first value: ");
    scanf("%d", &value1);
    
    printf("Enter the second value: ");
    scanf("%d", &value2);
    
    printf("\nBefore swap:\n");
    printf("Value 1: %d\n", value1);
    printf("Value 2: %d\n", value2);
    
    aux = value1;
    value1 = value2;
    value2 = aux;
    
    printf("\nAfter swap:\n");
    printf("Value 1: %d\n", value1);
    printf("Value 2: %d\n", value2);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
