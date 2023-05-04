#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: a string that contain a binary number
 * Return: the converted value
 */

unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
		return (0);
		dec_val = 2 * dec_val + (b[l] - '0');
	}

	return (dec_val);
}
