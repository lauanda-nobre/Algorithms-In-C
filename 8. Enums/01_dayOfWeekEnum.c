/*
 Name: Day of Week Enum
 Author: Lauanda Nobre
 Date: 04/24/2026
 Purpose: Demonstrate enum usage with days of the week
*/

#include <stdio.h>

enum DayOfWeek {
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};

int main() {
    enum DayOfWeek day;
    int dayNumber;
    
    printf("--- Day of Week Enum ---\n\n");
    printf("Days of the week:\n");
    printf("0 - Sunday\n");
    printf("1 - Monday\n");
    printf("2 - Tuesday\n");
    printf("3 - Wednesday\n");
    printf("4 - Thursday\n");
    printf("5 - Friday\n");
    printf("6 - Saturday\n\n");
    
    printf("Enter a day number (0-6): ");
    scanf("%d", &dayNumber);
    
    day = (enum DayOfWeek)dayNumber;
    
    printf("\nDay selected: ");
    
    switch(day) {
        case SUNDAY:
            printf("Sunday\n");
            break;
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day!\n");
    }
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
