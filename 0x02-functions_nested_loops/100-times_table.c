#include "main.h"

/**
 * print_times_table - print n times table
 * @n: number times
 */

void print_times_table(int n)
{
	int row, col, prod;

	if (n > 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			printf("0");
			for (col = 1; col <= n; col++)
			{
				printf(",");
				printf(" ");
				prod = row * col;
				if (prod <= 99)
					printf(" ");
				if (prod <= 9)
					printf(" ");
				if (prod >= 100)
				{
					printf("%d", prod / 100);
					printf("%d", (prod / 10) % 10);
				}
				else if (prod >= 10 && prod <= 99)
				{
					printf("%d", prod / 10);
				}
				printf("%d", prod % 10);
			}
			printf("\n");
		}
	}
}
