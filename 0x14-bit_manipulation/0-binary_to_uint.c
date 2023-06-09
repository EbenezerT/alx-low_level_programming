#include "main.h"

/**
 * binary_to_uint - function converts binary to units
 * @b: pointing to the string of 0 and 1
 * Return: returns the unit or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] == '0')
			num = num * 2;
		else if (b[i] == '1')
			num = num * 2 + 1;
		else
			return (0);
	return (num);
}
