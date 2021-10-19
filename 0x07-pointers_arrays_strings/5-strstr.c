/**
 * *_strstr - locates a substring.
 * @haystack: string argument
 * @needle: substring we want to find
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int key, pos, offset;

	offset = 0;

	for (pos = 0; haystack[pos] != 0; pos++)
	{
		if (s[pos] != needle[key - offset])
		{
			offset++
		}
}

