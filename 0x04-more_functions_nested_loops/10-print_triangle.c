#include "main.h"

/**
 *print_triangle - prints triangle
 *@size: Input from user
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		if (size <= 0)
			_putchar('\n');
		_putchar('\n');
	}
}
