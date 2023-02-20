#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int t1 = 0, t2;

	while (t1 <= 9)
	{
		t2 = 0;
		while (t2 <= 9)
		{
			if (t1 != t2 && t1 < t2)
			{
				putchar(t1 + 48);
				putchar(t2 + 48);

				if (t1 + t2 != 17)
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
