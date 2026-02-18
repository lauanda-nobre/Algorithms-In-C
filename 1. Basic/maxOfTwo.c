/*
 Name: Max Of Two
 Author: Lauanda Nobre
 Date: 02/18/2026 or 18/02/2026
 Purpose: Determine the larger of two given integers
*/

#include <stdio.h>

int main(){
    int number1;
    int number2;

    printf("Enter the first integer: ");
    scanf("%d", &number1);
    
    printf("Enter the second integer: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("The maximum is: %d\n", number1);
    } else if (number2 > number1) {
        printf("The maximum is: %d\n", number2);
    } else {
        printf("Both numbers are equal: %d\n", number1);
    }

    printf("Press Enter to continue... ");
    getchar();
    return 0;
}