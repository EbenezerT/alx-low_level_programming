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

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 99; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
		}
	}
	return (0);
}
