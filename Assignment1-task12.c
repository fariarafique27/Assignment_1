#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;

    printf("Enter rows to print : ");
    scanf("%d", &rows);
    while (rows < 3) {
        if (rows < 3) {
            printf("Enter number of rows greater then or equal to 3 :");
            scanf("%d", &rows);

        }
    }

    if (rows >= 3) {
        stars = 1;
        spaces = rows - 1;

        /* Iterate through rows */
        for (i = 1; i <= rows ; i++)
        {
            /* Print spaces */
            for (j = 1; j <= spaces; j++)
                printf(" ");

            /* Print stars */
            for (j = 1; j < stars * 2; j++)
                printf("*");

            /* Move to next line */
            printf("\n");
            if (rows % 2 == 1) {
                if (i < (rows/2)+1)
                {
                    spaces--;
                    stars++;
                }
                else
                {
                    spaces++;
                    stars--;
                }
            }
            if (rows % 2 == 0) {
                if (i < rows/2)
                {
                    spaces--;
                    stars++;
                    rows++;
                }
                else
                {
                    spaces++;
                    stars--;
                }
            }
           
        }


    }
    return 0;
}