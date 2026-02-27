/*
 Name: Simple Array Sum
 Author: Lauanda Nobre
 Date: 02/27/2026
 Purpose: Calculate the sum of elements in an array using a function
*/

#include <stdio.h>

void fillArray(int numbers[]) {
    int i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

int sumArray(int numbers[]) {
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int numbers[5];
    int result;
    int i;
    
    printf("--- Array Sum Function ---\n\n");
    
    fillArray(numbers);
    result = sumArray(numbers);
    
    printf("\n--- Results ---\n");
    printf("Numbers entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nSum of all numbers: %d\n", result);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
