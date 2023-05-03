#include "lists.h"

/**
 * reverse_listint - reverse a node
 * @head: a pointer to a pointer to the head of a list
 * Return: returns  pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		}

	*head = prev;
	return *head;
}
