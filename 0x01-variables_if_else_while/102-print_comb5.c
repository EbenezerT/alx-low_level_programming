#include <stdio.h>
/**
 * main - the main function goes here
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
		}
	}
	return (0);
}
