/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r, p, q;

	for (r = 48; r < 58; r++)
	{
		for (p = 49; p < 58; p++)
		{
			for (q = 50; q < 58; q++)
			{
				if (q > p && p > r)
				{
					putchar(r);
					putchar(p);
					putchar(q);
					if (r != 55 || p != 56)
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
