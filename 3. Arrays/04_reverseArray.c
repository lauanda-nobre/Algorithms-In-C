/*
 Name: Reverse Array
 Author: Lauanda Nobre
 Date: 03/13/2026
 Purpose: Reverse the elements of an array
*/

#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int i;
    int start, end;
    int aux;
    
    printf("--- Reverse Array ---\n\n");
    
    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("\nOriginal array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    
    start = 0;
    end = SIZE - 1;
    
    while (start < end) {
        aux = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = aux;
        
        start++;
        end--;
    }
    
    printf("\nReversed array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
