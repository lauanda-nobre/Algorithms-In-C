/*
 Name: Function Overloading Simulation
 Author: Lauanda Nobre
 Date: 02/27/2026
 Purpose: Demonstrate multiple functions with different behaviors
*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int num1 = 20;
    int num2 = 5;
    float num3 = 20.0;
    float num4 = 3.0;
    
    printf("--- Basic Arithmetic Functions ---\n\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("num3 = %.2f, num4 = %.2f\n\n", num3, num4);
    
    printf("%d + %d = %d\n", num1, num2, add(num1, num2));
    printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
    printf("%.2f / %.2f = %.2f\n", num3, num4, divide(num3, num4));
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
