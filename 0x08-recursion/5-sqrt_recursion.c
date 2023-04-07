#include "main.h"

/**
 * _square - square of a natural number
 * @num: the number to check
 * Return: returns square root
 * @root: roots of the number
 */
int _square(int num, int root)
{
	int square = root * root;

	if (square == num)
		return (root);
	if (root == num / 2)
		return (-1);
	else
		return (_square(num, root + 1));
}
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number to find the square root
 * Return: returns square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (_square(n, root));
}
