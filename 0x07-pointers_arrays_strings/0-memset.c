/**
 * _memset - sets a given amount of bytes to a value at an address
 *
 * @s: memory location to start at
 * @b: character to write to memory
 * @n: number of bytes to write
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0;f < n; f++)
		*(s + f) =  b;

	return (s);
}
