/*
 Name: Temperature Converter To Celsius
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Convert temperature from Fahrenheit to Celsius
 Formula: celsius = (fahrenheit - 32) * 5/9
*/

#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    
    printf("\nFahrenheit: %.2f°F\n", fahrenheit);
    printf("Celsius: %.2f°C\n", celsius);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
