#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first string
 * @accept: second
 * Return: returns number of bytes in the initial segement
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
