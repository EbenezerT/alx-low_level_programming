#include "main.h"

/**
 * *_strcat - copies one string to another
 * @dest: parameter 1
 * @src: parameter 2
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
