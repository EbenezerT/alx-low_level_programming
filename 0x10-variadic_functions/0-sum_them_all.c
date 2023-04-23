#include "variadic_functions.h"

/**
 * sum_them_all - sums number of arguments passed
 * @n: the number of arguments passed
 * @...: the parameters passed to be summed
 * Return: returns the sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, x, sum = 0;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, int);
		sum += x;
	}
	va_end(numbers);
	return (sum);
}
