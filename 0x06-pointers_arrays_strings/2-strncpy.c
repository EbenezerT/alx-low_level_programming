#include "main.h"

/**
 * *_strncpy - function copies to another
 * @src: parameter 1
 * @dest: parameter 2
 * @n: parameter 3
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
