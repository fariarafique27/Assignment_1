#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int prime = 1;
		printf("Enter a number: ");
		scanf("%d", &num);

		while (num < 0)
		{
			printf("Invalid !!!!\n: ");
			printf("Enter a number: ");
			scanf("%d", &num);
		}
		for (int loop = 2; loop < num; loop++)
		{
			if  ((num % loop )== 0)
			{
				prime = 0;
			}
		}
		if (prime == 0)
			printf("%d is not a prime number : ", num);

		
		else 
			printf("%d is  a prime number : " , num);

	
	
		return 0;
}