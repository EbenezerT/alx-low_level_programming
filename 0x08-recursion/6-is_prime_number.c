#include "main.h"

/**
 * divisible - checks if number is divisible by others
 * @num: number to be checked
 * @divide: number to divide
 * Return: return 1 or 0
 */
int divisible(int num, int divide)
{
	if ((num % divide) == 0)
		return (0);
	else if (divide == (num / 2))
		return (1);
	else
		return (divisible(num, divide + 1));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number to be checked as prime or not
 * Return: returns 1 or 0
 */

int is_prime_number(int n)
{
	int divide = 2;

	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	else
		return (divisible(n, divide));
}
