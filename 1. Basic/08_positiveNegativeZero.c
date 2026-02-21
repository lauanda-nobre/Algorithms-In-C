/*
 Name: Positive, Negative Or Zero
 Author: Lauanda Nobre
 Date: 02/20/2026 or 20/02/2026
 Purpose: Determine if a number is positive, negative or zero
*/

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf("The number %d is POSITIVE\n", number);
    } else if (number < 0) {
        printf("The number %d is NEGATIVE\n", number);
    } else {
        printf("The number is ZERO\n");
    }
    
    printf("Press Enter to continue... ");
    getchar();
    return 0;
}
