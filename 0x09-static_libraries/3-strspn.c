/**
 * _strspn - gets the length of a prefix substring.
 * @s: string argument
 * @accept: prefix substring
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	int letter, pos, i;

	counter = 0;

	for (i = 0; accept[i] != 0; i++)
	{
	}
	for (pos = 0; s[pos] != 0; pos++)
	{
		/* for every letter in accept string */
		for (letter = 0; accept[letter] != 0; letter++)
		{
			if (s[pos] == accept[letter])
			{
				counter++;
				break;
			}
		}
		if (letter == i)
			break;
	}
	return (counter);
}
