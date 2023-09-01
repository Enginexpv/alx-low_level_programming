#include "main.h"

/**
 * _strpbrk - Returns pointer to first occurence of any of accept
 * in the string s
 *
 * @s: string to search
 * @accept: characters to look for
 *
 * Return: pointer to first occurrence of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != 0)
	{
		if (*s == *p && *p != 0)
			return (s);
		p++;
		if (*p == 0)
		{
			p = accept;
			s++;
		}
	}
	return (0);
}
