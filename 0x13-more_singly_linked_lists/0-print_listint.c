#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints the elements of a list
 *
 *@h: pointer to the list
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (cursor != NULL)
	{

		printf("%d\n", cursor->n);

		count += 1;

		cursor = cursor->next;

	}

	return (count);

}
