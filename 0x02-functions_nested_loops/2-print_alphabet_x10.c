#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int e, w;

	for (e = 0; e <= 9; e++)
	{
		for (w = 97; w <= 122; w++)
		{
			_putchar(w);
		}
	_putchar('\n');
	}
}
