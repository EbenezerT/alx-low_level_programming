#include "main.h"
#include <string.h>
/**
 * _strlen - function to get the length of string
 * @s: parameter to input
 * Return: Always return 0
 */

int _strlen(char *s)
{
	int length;
	int count = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
		count++;
	}
	return (count);
}
