#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the input parameter
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 2);
	_putchar((n & 1) + '0');
}
