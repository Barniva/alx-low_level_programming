#include<stdio.h>

/**
 * main - Entry Point
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int t1 = 0, t2;

	while (t1 <= 99)
	{
		t2 = t1;
		while (t2 <= 99)
		{
			if (t2 != t1)
			{
				putchar((t1 / 10) + 48);
				putchar((t1 % 10) + 48);
				putchar(' ');
				putchar((t2 / 10) + 48);
				putchar((t2 % 10) + 48);

				if (t1 != 98 || t2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++t2;
		}
		++t1;
	}
	putchar('\n');

	return (0);
}
