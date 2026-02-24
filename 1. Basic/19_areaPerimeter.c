/*
 Name: Area and Perimeter Calculator
 Author: Lauanda Nobre
 Date: 02/24/2026 or 24/02/2026
 Purpose: Calculate area and perimeter of a square
 Formula: area = side * side
 Formula: perimeter = 4 * side
*/

#include <stdio.h>

int main() {
    float side;
    float area;
    float perimeter;
    
    printf("Enter the side length of a square: ");
    scanf("%f", &side);
    
    area = side * side;
    perimeter = 4 * side;
    
    printf("Area: %.2f square units\n", area);
    printf("Perimeter: %.2f units\n", perimeter);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
