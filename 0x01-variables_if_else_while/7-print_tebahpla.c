#include <stdio.h>
/**
 * main - the main function
 *
 * Return: Always return 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
