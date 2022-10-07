#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int  rollNo, semesters;
	float CGPA, GPA, sum = 0;

	printf("Enter your Roll no :");
	scanf("%d", &rollNo);

	printf("Enter number of semesters  :");
	scanf("%d", &semesters);

	for (int i = 1; i <= semesters; i++)
	{
		printf("Enter your  semesters %d CGPA :" , i);
		scanf("%f", &GPA);
		sum+=GPA;
		CGPA = sum / i;
		
	}
	printf("\n*********************RESULT CARD*************************\n");
	printf("CGPA :%.2f", CGPA);
	return 0;
}
