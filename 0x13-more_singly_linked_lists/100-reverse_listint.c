#include "lists.h"

/**
 * reverse_listint - Function
 * Description:  reverses a listint_t linked list
 * @head: pointer to pointer of type listint_t
 * Return: returns pointer for the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
