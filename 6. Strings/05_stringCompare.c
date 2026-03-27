/*
 Name: String Compare
 Author: Lauanda Nobre
 Date: 03/27/2026
 Purpose: Compare two strings
*/

#include <stdio.h>

int main() {
    char string1[100];
    char string2[100];
    int i = 0;
    int equal = 1;
    
    printf("--- String Compare ---\n\n");
    
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    
    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    
    if (string1[i] != string2[i]) {
        equal = 0;
    }
    
    printf("\nString 1: %s", string1);
    printf("String 2: %s", string2);
    
    if (equal) {
        printf("Strings are equal!\n");
    } else {
        printf("Strings are different!\n");
    }
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
