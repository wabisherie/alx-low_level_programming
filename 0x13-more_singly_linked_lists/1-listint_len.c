#include "lists.h"
#include <stdio.h>

/**
 *listint_len - returns number of elements in a linked list
 *
 *@h: the pointer to the list
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;



	while (h)
	{
		nodes++;

		h = h->next;
	}

	return (nodes);
}

