#include "lists.h"
#include "stdio.h"

/**
 * listint_len - return length of element
 * @h: argument pass for function
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
