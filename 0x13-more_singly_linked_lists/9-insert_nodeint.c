#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts node at any position
 * @head: pointer to pointer to the head of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: value to be stored in the new node
 *
 * Return: returns the new node otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = new_node->next;
	if (current == NULL)
		return (NULL);
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
