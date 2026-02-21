/*
 Name: Car Rental Price
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Calculate the price to pay for car rental based on days and kilometers
 Formula: total = (60 * days) + (0.5 * km)
*/

#include <stdio.h>

int main() {
    int days;
    float km;
    float total;
    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    printf("Enter the number of kilometers driven: ");
    scanf("%f", &km);
    
    total = (60 * days) + (0.5 * km);
    
    printf("Total to pay: R$ %.2f\n", total);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
