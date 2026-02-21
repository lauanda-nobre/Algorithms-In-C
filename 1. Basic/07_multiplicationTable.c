/*
 Name: Multiplication Table
 Author: Lauanda Nobre
 Date: 02/20/2026 or 20/02/2026
 Purpose: Display the multiplication table of a given number
*/

#include <stdio.h>

int main() {
    int number;
    int i;
    
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);
    
    printf("\nMultiplication table of %d:\n", number);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
