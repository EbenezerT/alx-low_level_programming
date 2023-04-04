#include "main.h"

/**
 * *_strpbrk - locates any occurence in the string s
 * @s: parameter
 * @accept: parameter to match
 * Return: returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
/*
*	return (strpbrk(s, accept));
*/
}
