#include "main.h"

/**
 * *_memcpy - copies src memory area to dest memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
/*
*	unsigned int index;
*
*	for (index = 0; index < n; index++)
*		dest[index] = src[index];
*	return (dest);
*/
	return (memcpy(dest, src, n));
}
