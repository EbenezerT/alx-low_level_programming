#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to the head of the listint_t list.
 * @n: The integer to store in the new node.
 *
 * Return: If memory allocation fails or head is NULL, returns NULL.
 *         Otherwise, returns the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *node_end;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	node_end = *head;

	for (; node_end->next != NULL;)
	node_end = node_end->next;
	node_end->next = new_node;
	return (new_node);
}
