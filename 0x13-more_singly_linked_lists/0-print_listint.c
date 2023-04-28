#include "lists.h"

/**
 * print_listint - Prints the elements of a list
 * @h: the list
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		nodes++;
		printf("%d\n", h->n);
	}
	return (nodes);
}
