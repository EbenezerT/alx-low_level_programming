#include "lists.h"

/**
 * add_nodeint - functions that a new node to a node
 * @head: A pointer to the head of the list_t list.
 * @n: string to be added to the node
 * Return: returns the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
