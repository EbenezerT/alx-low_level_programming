#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 nad 4
 * Return: does not return anything
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
