#include "main.h"
/**
 *print_numbers - prints 0 - 9.
 *
 *Return: void.
 */
void print_numbers(void)
{
	int no;

	for (no = 0; no < 10; no++)
	{
		_putchar('0' + no);
	}
	_putchar('\n');
}
