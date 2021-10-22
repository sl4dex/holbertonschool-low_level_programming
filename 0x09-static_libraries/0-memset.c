/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer marking start
 * @b: char to fill memory
 * @n: number of memory bytes
 *
 * Return: start of filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
