#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: string to compare
 * Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
