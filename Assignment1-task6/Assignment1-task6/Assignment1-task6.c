#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, upperlimit,a;
	
	printf("Enter a number1 :");
	scanf("%d", &upperlimit);

	while (upperlimit < 0) {
		printf("Invalid number\n");
		printf("Enter a number1 :");
		scanf("%d", &upperlimit);
	}
	printf("Twin pair of %d are :\n ", upperlimit);

	for (i = 3; i < upperlimit; i++)
	{
		a = 0;
		for (j = 3; j < i; j++)
		{
			if (i % j == 0 || (i + 2) % j == 0)
			{
				a = 1;
			}
		}
		if (a == 0)
		{
			printf("(% d,%d)\n", i, i + 2);
		}
	}
	getchar();
	return 0;
}