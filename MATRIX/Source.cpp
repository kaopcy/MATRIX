#include<stdio.h>
#include<conio.h>
int main()
{
	int num[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

		SORT:printf("Enter number : ");
			num[i][j] = _getch();
			if (num[i][j] >= 48 && num[i][j] <= 57)
			{
				printf("number is  %d\n", num[i][j] - 48);
			}
			else
			{
				goto SORT;
			}

		}
	}
	printf(" ===========\n");
	printf("  MATRIX IS\n");
	printf("    ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (num[i][j] != NULL)
			{
				printf("%d ", num[i][j] - 48);
			}

		}
		printf("\n    ");
	}
	int m = 0;
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("======================================\n");
			printf("If don't count colum : %d and row : %d\n", i + 1, j + 1);
			printf("MATRIX 2x2 is\n");
			for (int n = 0; n < 3; n++)
			{

				for (int m = 0; m < 3; m++)
				{
					if (n != j && m != i)
					{
						printf("%d ", num[n][m] - 48);
					}
				}
				if (n != j && m != i) {
					printf("\n");
				}

				if (n != j && m == i) {
					printf("\n");
				}
			}

		}
	}

}