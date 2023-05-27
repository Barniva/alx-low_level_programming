#include <stdio.h>
/**
 *main - Prints natural numbers below 1024 that are
 *multiplies of 3 or 5
 *
 *Return: Always 0.
 */
int main(void)
{
	int m, h;

	for (m = 1; m < 1024; m++)
	{
	if ((m % 3) == 0 || (m % 5) == 0)
	h = h + m;
	}
	printf("%d\n", h);
	return (0);
}
