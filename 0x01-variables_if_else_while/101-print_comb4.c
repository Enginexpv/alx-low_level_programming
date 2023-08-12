#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, r, q;

	for (k = 48; k < 58; k++)
	{
		for (r = 49; r < 58; r++)
		{
			for (q = 50; q < 58; q++)
			{
				if (q > r && r > k)
				{
					putchar(k);
					putchar(r);
					putchar(q);
					if (k != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
