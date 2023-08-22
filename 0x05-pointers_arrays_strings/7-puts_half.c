#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int index = 0, length = 0, r;

	while (str[index++])
		length++;

	if ((length % 2) == 0)
		r = length / 2;

	else
		r = (length + 1) / 2;

	for (index = r; index < length; index++)
		_putchar(str[index]);

	_putchar('\n');
}
