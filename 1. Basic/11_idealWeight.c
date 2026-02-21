/*
 Name: Ideal Weight
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Calculate ideal weight based on height
 Formula: ideal = ((72.7 * height) - 58)
*/

#include <stdio.h>

int main() {
    float height;
    float ideal;
    
    printf("Enter your height in meters (ex: 1.75): ");
    scanf("%f", &height);
    
    ideal = (72.7 * height) - 58;
    
    printf("Ideal weight: %.2f kg\n", ideal);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
