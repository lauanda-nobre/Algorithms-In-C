/*
 Name: What's My Name
 Author: Lauanda Nobre
 Date: 02/18/2026 or 18/02/2026
 Purpose: Reads and prints the user's name
*/

#include <stdio.h>

int main() {
    char name[50];
    printf("What is your name? ");
    scanf("%s", name);
    printf("Your name is: %s\n", name);
    printf("Press Enter to continue...");
    getchar();
    return 0;
}   