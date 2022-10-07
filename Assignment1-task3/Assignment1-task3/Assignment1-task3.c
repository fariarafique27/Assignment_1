#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int number1, number2 , sum1=0;
	int reminder1=0, reminder2 = 0;
	int sum2 = "";
	int place = 1;

	printf("Enter a number1 :");
	scanf("%d", &number1);
	while (number1 < 0) {
		printf("Invalid number\n");
		printf("Enter a number1 :");
		scanf("%d", &number1);

	}
	printf("Enter a number2 :");
	scanf("%d", &number2);
	while (number2 < 0) {
		printf("Invalid number :\n");
		printf("Enter a number2 :");
		scanf("%d", &number2);

	}
	printf("  %d\n", number1);
	printf("+  %d\n", number2);
	int i = 0;
	while( number1 || number2 )
	
	{
		reminder1 = number1 % 10;
		number1 = number1 / 10;
		reminder2 = number2 % 10;
		number2 = number2 / 10;
		sum1=sum1+ (reminder1 + reminder2)*place;
		place = place * 10;
	
	}

	printf("_______________\n");
	printf("  %d\n", sum1);
	return 0;
}