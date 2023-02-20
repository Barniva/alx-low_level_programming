#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: A progrm that prints a-z in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char la = 'z';

	while (la >= 'a')
	{
		putchar(la);
		la--;
	}
	putchar('\n');

	return (0);
}
