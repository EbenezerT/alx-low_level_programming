#include "main.h"
#include <ctype.h>

/**
 * _islower - the function checks for lowercase
 *@c: parameter _islower
 * Return: 1 if is lower
 * and 0 if is not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
