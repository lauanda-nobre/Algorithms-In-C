/*
 Name: String Copy
 Author: Lauanda Nobre
 Date: 03/27/2026
 Purpose: Copy one string to another string
*/

#include <stdio.h>

int main() {
    char source[100];
    char destination[100];
    int i = 0;
    
    printf("--- String Copy ---\n\n");
    
    printf("Enter a text to copy: ");
    fgets(source, sizeof(source), stdin);
    
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    
    printf("\nOriginal: %s", source);
    printf("Copy: %s", destination);
    
    printf("\nPress Enter to continue... ");
    getchar();
    return 0;
}
