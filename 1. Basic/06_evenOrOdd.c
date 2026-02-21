/*
 Name: Even Or Odd
 Author: Lauanda Nobre
 Date: 02/20/2026 or 20/02/2026
 Purpose: Determine if a number is even or odd
*/

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("The number %d is EVEN\n", number);
    } else {
        printf("The number %d is ODD\n", number);
    }
    
    printf("Press Enter to continue... ");
    getchar();
    return 0;
}
