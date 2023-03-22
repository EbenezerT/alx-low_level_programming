#include <ctype.h>

/**
 * _isalpha - this function checks for alpha numerics
 * Return: 1 if is alphanumeric and 0 if not
 * @c: function parameter
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
