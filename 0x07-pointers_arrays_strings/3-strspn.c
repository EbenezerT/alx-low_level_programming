#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first string
 * @accept: second
 * Return: returns number of bytes in the initial segement
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len1, len2, count = 0;
	unsigned int i, j;


	len1 = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
	}
	return (count);
/*
*	return (strspn(s, accept));
*/
}
