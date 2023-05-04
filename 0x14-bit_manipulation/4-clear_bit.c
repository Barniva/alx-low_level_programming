#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: number to be used
 * @index: index of the bit to clear
 *
 * Return: 1 on sucesss, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
