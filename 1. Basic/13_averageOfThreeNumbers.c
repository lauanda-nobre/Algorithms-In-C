/*
 Name: Average of Three Numbers
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Calculate the average of three numbers
*/

#include <stdio.h>

int main() {
    float number1;
    float number2;
    float number3;
    float average;
    
    printf("Enter the first number: ");
    scanf("%f", &number1);
    printf("Enter the second number: ");
    scanf("%f", &number2);
    printf("Enter the third number: ");
    scanf("%f", &number3);
    
    average = (number1 + number2 + number3) / 3;
    
    printf("Average: %.2f\n", average);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
