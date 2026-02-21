/*
 Name: Temperature Converter To Fahrenheit
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Convert temperature from Celsius to Fahrenheit
 Formula: fahrenheit = (celsius * 9/5) + 32
*/

#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    
    printf("\nCelsius: %.2f°C\n", celsius);
    printf("Fahrenheit: %.2f°F\n", fahrenheit);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
