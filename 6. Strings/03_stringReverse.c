/*
 Name: String Reverse
 Author: Lauanda Nobre
 Date: 03/27/2026
 Purpose: Reverse a string
*/

#include <stdio.h>

int main() {
    char text[100];
    char reversed[100];
    int i = 0;
    int length = 0;
    
    printf("--- String Reverse ---\n\n");
    
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }
    
    i = 0;
    for (i = 0; i < length; i++) {
        reversed[i] = text[length - 1 - i];
    }
    reversed[i] = '\0';
    
    printf("\nOriginal: %s", text);
    printf("Reversed: %s\n", reversed);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
