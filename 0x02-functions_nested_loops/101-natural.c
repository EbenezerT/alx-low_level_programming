#include "main.h"

/**
 * main - the function is used to print multiples of 3 and 5 less than 1024
 *Return: return 0
 */

int main(void)
{
	int mul, sum;

	for (mul = 0; mul < 1024; mul++)
	{
		if (mul % 3 == 0 || mul % 5 == 0)
			sum =+ mul;
	}
	printf("\n");
	return (0);
}
