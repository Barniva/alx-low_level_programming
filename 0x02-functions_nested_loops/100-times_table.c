#include "main.h"
/**
 *print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *Return: no retun
 */
void print_times_table(int n)
{
	int m, h, pro;

	if (n >= 0 && n <= 15)
	{
	for (m = 0; m <= n; m++)
	{
	_putchar(48);
	for (h = 1; h <= n; h++)
	{
	pro = m * h;
	_putchar(44);
	_putchar(32);
	if (pro <= 9)
	{
	_putchar(32);
	_putchar(32);
	_putchar(pro + 48);
	}
	else if (pro <= 99)
	{
	_putchar(32);
	_putchar((pro / 10) + 48);
	_putchar((pro % 10) + 48);
	}
	else
	{
	_putchar(((pro / 100) % 10) + 48);
	_putchar(((pro / 10) % 10) + 48);
	_putchar((pro % 10) + 48);
	}
	}
	_putchar('\n');
	}
	}
}
