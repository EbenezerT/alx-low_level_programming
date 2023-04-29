#include "lists.h"

/**
 * sum_listint - function sums all the data of list
 * @head: a poiter to the head of the list
 * Return: returns the sum otherwise 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	for (; temp != NULL; temp = temp->next)
		sum += temp->n;
	return (sum);

	if (temp == NULL)
		return (0);
}
