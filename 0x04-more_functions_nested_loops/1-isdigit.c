#include "main.h"

/**
 *_isdigit - the function to check digits
 * @c: the parameter to be checked
 * Return: returns 1 if is a digit and returns 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
