#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size to allocate
 * Return: returns void pointer to malloc memory alloc
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
