/*
 Name: Nested Function Calls
 Author: Lauanda Nobre
 Date: 06/03/2026
 Purpose: Demonstrate functions calling other functions
*/

#include <stdio.h>

float calculateAverage(float g1, float g2, float g3) {
    return (g1 + g2 + g3) / 3;
}

char getClassification(float average) {
    if (average >= 9.0) {
        return 'A';
    } else if (average >= 7.5) {
        return 'B';
    } else if (average >= 6.0) {
        return 'C';
    } else if (average >= 4.0) {
        return 'D';
    } else {
        return 'F';
    }
}

void displayResult(float grade1, float grade2, float grade3) {
    float average;
    char classification;
    
    average = calculateAverage(grade1, grade2, grade3);
    classification = getClassification(average);
    
    printf("\n--- Academic Performance ---\n");
    printf("Grade 1: %.2f\n", grade1);
    printf("Grade 2: %.2f\n", grade2);
    printf("Grade 3: %.2f\n", grade3);
    printf("Average: %.2f\n", average);
    printf("Classification: %c\n", classification);
}

int main() {
    float g1, g2, g3;
    
    printf("--- Nested Function Calls ---\n\n");
    
    printf("Enter grade 1: ");
    scanf("%f", &g1);
    
    printf("Enter grade 2: ");
    scanf("%f", &g2);
    
    printf("Enter grade 3: ");
    scanf("%f", &g3);
    
    displayResult(g1, g2, g3);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
