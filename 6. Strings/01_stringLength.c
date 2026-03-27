/*
 Name: String Length
 Author: Lauanda Nobre
 Date: 03/27/2026
 Purpose: Calculate the length of a string manually
*/

#include <stdio.h>

int main() {
    char text[100];
    int length = 0;
    int i = 0;
    
    printf("--- String Length ---\n\n");
    
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    
    while (text[i] != '\0' && text[i] != '\n') {
        length++;
        i++;
    }
    
    printf("\nText: %s", text);
    printf("Length: %d\n", length);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
