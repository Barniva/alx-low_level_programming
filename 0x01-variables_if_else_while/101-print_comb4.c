#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *            combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int t1 = 0;
	int t2, t3;

	while (t1 <= 9)
	{
		t2 = 0;
		while (t2 <= 9)
		{
			t3 = 0;
			while (t3 <= 9)
			{
				if (t1 != t2 &&
				    t1 < t2 &&
				    t2 != t3 &&
				    t2 < t3)
				{
					putchar(t1 + 48);
					putchar(t2 + 48);
					putchar(t3 + 48);

					if (t1 + t2 + t3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++t3;
			}
			++t2;
		}
		++t1;
	}
	putchar('\n');

	return (0);
}
