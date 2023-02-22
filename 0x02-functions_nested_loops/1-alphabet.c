#include "main.h"

/**
 * print_alphabet - print the alphabet a - z
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');

}
