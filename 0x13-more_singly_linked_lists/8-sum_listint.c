#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	if (!head)
		return (sum);
	p = head;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
