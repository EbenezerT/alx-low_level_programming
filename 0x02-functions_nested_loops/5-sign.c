#include "main.h"

/**
 *print_sign - the funtion prints the signs
 *@n: parameter for the function
 *Return: 1 if positive, 0 if is zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
