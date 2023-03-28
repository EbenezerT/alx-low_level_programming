#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: parameter a
 * @b: parameter b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
