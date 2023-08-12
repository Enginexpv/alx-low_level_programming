#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int k, r;

	for (k = 48; k <= 56; k++)
	{
		for (r = 49; r <= 57; r++)
		{
			if (r > k)
			{
				putchar(k);
				putchar(r);
				if (k != 56 || r != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
