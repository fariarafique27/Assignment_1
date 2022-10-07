#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	
	char ch;

	

	do {
		printf("Enter  a character: ");
		scanf("%c", &ch);
		getchar();


		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c is a small character.\n ", ch);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c is a Capital character.\n ", ch);
		}
		else if (ch >= '0' && ch <= '9')
		{
			printf("%c is a digit.\n ", ch);
		}

		else
		{
			printf("%c is a special character\n ", ch);
		}

		printf("Do you want to continue ? (Yes/No): ");
		scanf("%c", &ch);
		getchar();
		printf("\n ");

		
	} while (ch == 'Y' || ch=='y');

	return 0;
}
