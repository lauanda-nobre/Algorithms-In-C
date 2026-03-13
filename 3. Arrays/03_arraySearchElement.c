/*
 Name: Array Search Element
 Author: Lauanda Nobre
 Date: 03/13/2026
 Purpose: Search for an element in an array and return its position
*/

#include <stdio.h>

#define SIZE 6

int main() {
    int numbers[SIZE];
    int i;
    int search;
    int found = 0;
    int position = -1;
    
    printf("--- Array Search Element ---\n\n");
    
    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("\nEnter the number to search: ");
    scanf("%d", &search);
    
    for (i = 0; i < SIZE; i++) {
        if (numbers[i] == search) {
            found = 1;
            position = i;
            break;
        }
    }
    
    printf("\n--- Search Results ---\n");
    printf("Array elements: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    if (found) {
        printf("Number %d found at position: %d\n", search, position + 1);
    } else {
        printf("Number %d not found in the array!\n", search);
    }
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
