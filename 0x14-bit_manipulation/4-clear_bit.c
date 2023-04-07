#include "main.h"

/**
 * clear_bit - sets a bit at a position to 0
 * @n: pointer indicating the new number
 * @index: index to be set
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
