#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter
 */

void puts_half(char *str)
{
	int i = 0, count = 0, n;

	for (i = 0; i < str[i]; i++)
		count++;
	if ((count % 2) == 0)
		n = count / 2;
	else
		n = (count + 1) / 2;
	for (i = n; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
