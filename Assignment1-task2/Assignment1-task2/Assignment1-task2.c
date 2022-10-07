#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int divinded, divisor ,reminder=0;
	int quotient = 0;
		printf("Enter divinded number: ");
	scanf("%d", &divinded);
	if (divinded < 0)
	{
		while (divinded < 0)
		{
			printf("Invalid number:\n ");

			printf("Enter divinded number again:\n ");
			scanf("%d", &divinded);
		}
	}
	printf("Enter divisor  number: ");
	scanf("%d", &divisor);
	if (divisor < 0 || divisor > divinded)
	{
		while (divisor < 0 || divisor > divinded)
		{
			printf("Invalid number:\n ");
			printf("Enter  divisor number again: ");
			scanf("%d", &divisor);
		}
	}
	while(divinded >=divisor) {
		divinded = divinded - divisor;
		quotient++;
	}
	reminder = divinded;
		
	
	printf("\n Quotient: %d\n", quotient);

	printf("Reminder: %d", reminder);
	return 0; 
}