//first serie 5 , 7 , 9 , 11 , 13 , 15 ...............
//second series 7 , 8 l 9 10 ,11 , 12............

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1, difference , count1 = 1 , temp1;       //For series 1 
	int  num2 , count2 = 1, temp2 ;                 //for series 2 
	
	printf("Enter First Number of the series :");       
	scanf("%d", &num1);
	temp1 = num1;										//convenience
	printf("Enter difference of the series :");
	scanf("%d", &difference);
	printf("\nEnter First Number of the series 2:");
	scanf("%d", &num2);

	temp2 = num2;										//convenience
	printf("\n");
	printf("%d\t" ,num1);

	while (count1 <= 10)				//10 element of series 2 
	{
		num1 = num1 + difference;
		printf("%d\t", num1);
		count1++;
	}
	printf("\n");

	printf("%d\t", num2);

	while (count2 <= 10)			//10 element of series 2 
	{
		num2=num2+1;
		printf("%d\t", num2);
		count2++;
	}

	int series1NUm=0,i=1,j , crossNum;

	printf("\nEnter Number from the series 1:");			//number from series 1 
	scanf("%d",&series1NUm);

	if (series1NUm == temp1)
	{
		printf("The corresponding number is: %d", temp2);
	}

	else {

		j = series1NUm - temp1; 	// finding position of 
		// number entered
		j = j / difference;

		crossNum = temp2 + 1;

		while (i < j)
		{
			crossNum = crossNum + 1; // calculating corresponding number
			i++;
		}

		printf("The corresponding number is: %d", crossNum);

	}
		
	
	return 0;
}