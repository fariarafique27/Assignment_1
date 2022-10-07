#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int start, end;
	int j, i;
	printf("Enter starting integer:");
	scanf("%d", &start);

	printf("Enter Ending integer:");
	scanf("%d", &end);
	
	for ( i = start; i <= end; i++)
	{
			for ( j =i ;j <= end; j++)
			{
				if (i < end && ((i + j) <= (end + start)))
					printf("(%d,%d)", i, j);
			}
		printf("\n");
}
	return 0;
}
