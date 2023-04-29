#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: a pointer to the head of a list
 * @index: the index of a node
 * Return: returns the nth node and 0 otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nth_node;

	nth_node = head;

	for (i = 0; nth_node != NULL && i < index; i++)
		nth_node = nth_node->next;
	if (nth_node == NULL)
		return (NULL);
	return (nth_node);
}
