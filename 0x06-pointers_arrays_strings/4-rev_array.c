#include "main.h"

/**
 * reverse_array - Reverse elements of an array
 * @a: the array name
 * @n: the number of array elements
 * Return: Always return 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
