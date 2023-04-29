#include "lists.h"

/**
 * pop_listint - function that deletes the
 * head node of a list
 * @head: a pointer to a pointer to the head of a list
 * Return: returns 0 if empty
 * and returns the head nodes data otherwise
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
