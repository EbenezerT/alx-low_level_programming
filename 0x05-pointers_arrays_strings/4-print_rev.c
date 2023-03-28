#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse form
 * @s: parameter
 *Return: always return 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
