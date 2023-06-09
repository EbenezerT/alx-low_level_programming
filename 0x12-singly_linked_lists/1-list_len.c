#include "lists.h"

/**
 * list_len - function that returns the len of a list
 * @h: the list
 * Return: returns the length of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
