#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int w = 0, k = 0;

	while (k == 0)
	{
		if ((*(s1 + w) == '\0') && (*(s2 + w) == '\0'))
			break;
		k = *(s1 + w) - *(s2 + w);
		w++;
	}

	return (k);
}
