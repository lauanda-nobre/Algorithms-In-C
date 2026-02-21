/*
 Name: Simple Interest Calculator
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Calculate simple interest
 Formula: interest = (principal * rate * time) / 100
*/

#include <stdio.h>

int main() {
    float principal;
    float rate;
    float time;
    float interest;
    float total;
    
    printf("Enter the principal amount (initial value): ");
    scanf("%f", &principal);
    
    printf("Enter the interest rate (annual percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the time period in years: ");
    scanf("%f", &time);
    
    interest = (principal * rate * time) / 100;
    total = principal + interest;
    
    printf("\n--- -----------------------------\n");
    printf("Principal: R$ %.2f\n", principal);
    printf("Rate: %.2f%% per year\n", rate);
    printf("Time: %.2f years\n", time);
    printf("Interest: R$ %.2f\n", interest);
    printf("Total amount: R$ %.2f\n", total);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
