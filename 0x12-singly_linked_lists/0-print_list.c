#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: the lists
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
	}
	return (nodes);
}
