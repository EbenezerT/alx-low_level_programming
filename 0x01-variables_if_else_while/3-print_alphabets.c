#include <stdio.h>
#include <ctype.h>
/**
 * main - the main function here
 *
 * Return: return 0 always
 */
int main(void)
{
	char x;
	char j;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	j = toupper(x);

	putchar(j);
	putchar('\n');
	return (0);
}
