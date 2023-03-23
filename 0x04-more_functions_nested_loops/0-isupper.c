#include "main.h"
#include <ctype.h>

/**
 *_isupper - function that checks for uppercase
 *@c: parameter to check
 *Return: return 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
