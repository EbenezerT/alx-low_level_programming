#include "main.h"

/**
 * is_palindrome - checks if a string is palidrome or not
 * @s: the string to check
 * Return: returns 1 if palidrome
 * and 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (1);
	else
		return (check_palidrome(s, 0, len - 1));
}

/**
 * check_palidrome - checks if is a palidrome
 * @start: start of the string
 * @end: end of the string
 * @s: string to check
 * Return: returns 1 if pal and 0 if not
 */

int check_palidrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] == s[end])
		return check_palidrome(s, start + 1, end - 1);
	else
		return (0);
}
