#include "main.h"

/**
 * *_strchr - locate a character
 * @s: pointer to the string
 * @c: character to be located
 * Return: Returns 1 or null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
