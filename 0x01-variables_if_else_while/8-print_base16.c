#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char la = 'a';
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (la <= 'f')
	{
		putchar(la);
		la++;
	}
	putchar('\n');

	return (0);

}
