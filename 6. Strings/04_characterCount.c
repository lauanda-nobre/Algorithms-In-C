/*
 Name: Character Count in String
 Author: Lauanda Nobre
 Date: 03/27/2026
 Purpose: Count the occurrences of a character in a string
*/

#include <stdio.h>

int main() {
    char text[100];
    char search;
    int count = 0;
    int i = 0;
    
    printf("--- Character Count in String ---\n\n");
    
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    
    printf("Enter the character to count: ");
    scanf("%c", &search);
    
    while (text[i] != '\0') {
        if (text[i] == search) {
            count++;
        }
        i++;
    }
    
    printf("\nText: %s", text);
    printf("Character '%c' appears %d times\n", search, count);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
