#include "main.h"

/**
 * print_line - prints lines
 * @n: parameter
 * Return: always return 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
	{
		if (n <= 0)
			_putchar('\n');
	}
}
