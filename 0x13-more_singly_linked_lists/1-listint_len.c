#include "lists.h"

/**
 * listint_len - function that returns the length of a list
 * @h: lists parameter
 * Return: returns number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;
	return (count);
}
