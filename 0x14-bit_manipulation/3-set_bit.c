#include "main.h"

/**
 * set_Nit - sets a bit at a given index to 1
 * @b: number to be used
 * @insex: index to be set
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
