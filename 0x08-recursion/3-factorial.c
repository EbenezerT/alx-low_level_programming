#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: number to enter
 * Return: returns 0 , factorial and -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
