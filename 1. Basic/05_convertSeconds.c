/*
 Name: ConvertSeconds
 Author: Lauanda Nobre
 Date: 02/19/2026 or 19/02/2026
 Purpose: A simple algorithm that converts days, hours and minutes to seconds 
*/
#include <stdio.h>

int main() 
{
	int day, time, minute, second;
	int result;
	
	printf("Enter the number of days:");
	scanf("%d", &day);
	printf("Enter the number of hours:");
	scanf("%d", &time);
	printf("Enter the number of minutes:");
	scanf("%d", &minute);
	printf("Enter the number of seconds:");
	scanf("%d", &second);
	
	result = (day * 24 * 60 * 60) + (time * 60 * 60) + (minute * 60) + second;
	printf("Result in seconds: %d\n", result);
    printf("Press Enter to continue... ");
    getchar();
    return 0;
}
