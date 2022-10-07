#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3 = 0;

	printf("Enter first number: ");
	scanf("%d", &num1);
	if (num1 < 0)
	{
		while (num1 < 0)
		{
			printf("Invalid number:\n ");

			printf("Enter first number:\n ");
			scanf("%d", &num1);
		}
	}
	printf("Enter second  number: ");
	scanf("%d", &num2);
	if (num2 < 0)
	{
		while (num2 < 0)
		{
			printf("Invalid number:\n ");
			printf("Enter second number: ");
			scanf("%d", &num2);
		}
	}
	for (int i = 0; i < num2;i++)
	{


		num3 += num1;

	}
	printf("%d", num3);

	return 0;
}