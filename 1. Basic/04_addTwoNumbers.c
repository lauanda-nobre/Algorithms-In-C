/*
 Name: Add Two Numbers
 Author: Lauanda Nobre
 Date: 02/19/2026 or 19/02/2026
 Purpose: add two numbers
*/
#include <stdio.h>

int main() 
{
	float number1;
	float number2;
	float result;
	
	printf("Enter the first:");
	scanf("%f",&number1);
	printf("Enter the second:");
	scanf("%f",&number2);
	result = number1 + number2;
	printf("Result: %2.f\n",result);

	 printf("Press Enter to continue... ");
    getchar();
    return 0;
}
