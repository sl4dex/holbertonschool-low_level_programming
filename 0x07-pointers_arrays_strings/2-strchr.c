/**
 * *_strchr - locates a character in a string.
 * @s: string argument
 * @c: char we want to locate
 *
 * Return: string starting from located char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
