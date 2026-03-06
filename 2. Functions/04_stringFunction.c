/*
 Name: String Function
 Author: Lauanda Nobre
 Date: 06/03/2026
 Purpose: Demonstrate functions that manipulate strings
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countCharacters(char text[]) {
    int count = 0;
    int i = 0;
    while (text[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

void toUppercase(char text[]) {
    int i = 0;
    while (text[i] != '\0') {
        text[i] = toupper(text[i]);
        i++;
    }
}

void toLowercase(char text[]) {
    int i = 0;
    while (text[i] != '\0') {
        text[i] = tolower(text[i]);
        i++;
    }
}

int main() {
    char text[100];
    int length;
    
    printf("--- String Functions ---\n\n");
    
    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);
    
    length = countCharacters(text);
    printf("\nOriginal text: %s", text);
    printf("Number of characters (including newline): %d\n", length);
    
    toUppercase(text);
    printf("Uppercase: %s", text);
    
    toLowercase(text);
    printf("Lowercase: %s", text);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
