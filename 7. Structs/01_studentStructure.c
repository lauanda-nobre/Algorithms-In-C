/*
 Name: Student Structure
 Author: Lauanda Nobre
 Date: 04/24/2026
 Purpose: Demonstrate structure usage with student data
*/

#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float grade1;
    float grade2;
    float grade3;
    float average;
};

int main() {
    struct Student student;
    
    printf("--- Student Structure ---\n\n");
    
    printf("Enter student ID: ");
    scanf("%d", &student.id);
    
    printf("Enter student name: ");
    scanf("%s", student.name);
    
    printf("Enter grade 1: ");
    scanf("%f", &student.grade1);
    
    printf("Enter grade 2: ");
    scanf("%f", &student.grade2);
    
    printf("Enter grade 3: ");
    scanf("%f", &student.grade3);
    
    student.average = (student.grade1 + student.grade2 + student.grade3) / 3;
    
    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Grade 1: %.2f\n", student.grade1);
    printf("Grade 2: %.2f\n", student.grade2);
    printf("Grade 3: %.2f\n", student.grade3);
    printf("Average: %.2f\n", student.average);
    
    if (student.average >= 7.0) {
        printf("Status: APPROVED\n");
    } else {
        printf("Status: FAILED\n");
    }
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
