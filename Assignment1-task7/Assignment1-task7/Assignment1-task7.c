#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1, num2 , lcm , fact=1;

	printf("Enter a number1 :");
	scanf("%d", &num1);
	while (num1 < 0) {
		printf("Invalid number\n");
		printf("Enter a number1 :");
		scanf("%d", &num1);
	}
	printf("Enter a number2 :");
	scanf("%d", &num2);
	while (num2 < 0) {
		printf("Invalid number\n");
		printf("Enter a number1 :");
		scanf("%d", &num2);
	}
	lcm = (num1 > num2) ? num1 : num2;
	
	while (fact)
	{

		if (lcm % num1 == 0 && lcm % num2 == 0)
		{
			printf("Lcm of %d and %d is : %d \n", num1, num2, lcm);
			fact = 0;
		}
		lcm++;
	}
	return 0;
}
