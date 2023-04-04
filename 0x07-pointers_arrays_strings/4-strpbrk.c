#include "main.h"

/**
 * *_strpbrk - locates any occurence in the string s
 * @s: parameter
 * @accept: parameter to match
 * Return: returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
