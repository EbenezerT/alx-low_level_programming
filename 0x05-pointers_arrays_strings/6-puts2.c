#include "main.h"
#include <string.h>

/*
 * puts2 - prints every other character
 * @str: parameter to input
 */

void puts2(char *str)
{
	int i;
        int count = 0;

        for (i = 0; str[i] != '\0'; i++)
        {
                count++;
	}
	for (i = 0; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
