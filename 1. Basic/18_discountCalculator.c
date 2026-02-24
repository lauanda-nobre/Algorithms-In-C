/*
 Name: Discount Calculator
 Author: Lauanda Nobre
 Date: 02/24/2026 or 24/02/2026
 Purpose: Calculate the final price after applying a discount
 Formula: final_price = original_price - (original_price * discount_percentage / 100)
*/

#include <stdio.h>

int main() {
    float original_price;
    float discount_percentage;
    float discount_amount;
    float final_price;
    
    printf("Enter the original price: R$ ");
    scanf("%f", &original_price);
    
    printf("Enter the discount percentage: ");
    scanf("%f", &discount_percentage);
    
    discount_amount = (original_price * discount_percentage) / 100;
    final_price = original_price - discount_amount;

    printf("Original price: R$ %.2f\n", original_price);
    printf("Discount: %.2f%%\n", discount_percentage);
    printf("Discount amount: R$ %.2f\n", discount_amount);
    printf("Final price: R$ %.2f\n", final_price);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
