/*
 Name: Body Mass Index (BMI)
 Author: Lauanda Nobre
 Date: 02/21/2026 or 21/02/2026
 Purpose: Calculate Body Mass Index (BMI) from weight and height
 Formula: BMI = weight / (height * height)
*/

#include <stdio.h>

int main() {
    float weight;
    float height;
    float bmi;
    
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in meters (ex: 1.75): ");
    scanf("%f", &height);
    
    bmi = weight / (height * height);
    
    printf("\n-----------------\n");
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f m\n", height);
    printf("BMI: %.2f\n", bmi);
    
    if (bmi < 18.5) {
        printf("Classification: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Classification: Normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Classification: Overweight\n");
    } else {
        printf("Classification: Obese\n");
    }
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
