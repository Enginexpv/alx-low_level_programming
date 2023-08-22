#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random passwords for the program
 *
 * Return: Always 0.
 */
int main(void)
{
	int pass[100];
	int r, sum, q;

	sum = 0;	

	srand(time(NULL));

	for (r = 0; r < 100; r++)
	{
		pass[r] = rand() % 78;
		sum += (pass[r] + '0');
		putchar(pass[r] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			q = 2772 - sum - '0';
			sum += q;
			putchar(q + '0');
			break;
		}
	}

	return (0);
}
