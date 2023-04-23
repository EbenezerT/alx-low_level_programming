#include "variadic_functions.h"

/**
 * print_numbers - prints numbers that is passed
 * @separator: string to be printe btn numbs
 * @n: the number of numbers passed
 * @...: the variable numbers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
