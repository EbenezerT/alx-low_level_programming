#include "main.h"

/**
 * *string_toupper - converts lowercase in a string to upper
 * @c: parameter to be passed
 * Return: Always return 0
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
