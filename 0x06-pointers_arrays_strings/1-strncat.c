#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n bites
 * @src: parameter 1
 * @dest: parametr 2
 * @n: parameter 3
 * Return: it returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length;
	int i;

	dest_length = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_length + i] = src[i];
	dest[dest_length + i] = '\0';
	return (dest);
}
