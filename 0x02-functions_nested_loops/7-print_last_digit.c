#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - function that prints last digit of a number
 * Return: returns the function type
 * @j: parameters to enter
 */
int print_last_digit(int j)
{
	int m;

	m = j % 10;
	if (j < 0)
		m = abs(m);
	_putchar(m + '0');
	return (m);
}
