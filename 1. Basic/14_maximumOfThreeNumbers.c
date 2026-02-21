/*
 Name: Maximum of Three Numbers
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Find the maximum value among three numbers
*/

#include <stdio.h>

int main() {
    int number1;
    int number2;
    int number3;
    int maximum;
    
    printf("Enter the first number: ");
    scanf("%d", &number1);
    
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    printf("Enter the third number: ");
    scanf("%d", &number3);
    
    maximum = number1;
    
    if (number2 > maximum) {
        maximum = number2;
    }
    
    if (number3 > maximum) {
        maximum = number3;
    }
    
    printf("\n--- Maximum Finder ---\n");
    printf("Number 1: %d\n", number1);
    printf("Number 2: %d\n", number2);
    printf("Number 3: %d\n", number3);
    printf("Maximum: %d\n", maximum);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
