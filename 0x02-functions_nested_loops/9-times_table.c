#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: always return 0;
 */

void times_table(void)
{
	int row;
	int col;
	int prod;


	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');
			prod = row *col;
		if (prod <= 9)
		{
			_putchar(' ');
		}
		else
			_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
