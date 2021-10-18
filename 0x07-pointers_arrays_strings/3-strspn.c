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
	int letter, pos;

	 counter = 0;
	/* for every letter in accept string */
	for (letter = 0; accept[letter] != 0; letter++)
	{
		/* check if it matches with any letter of s string */
		for (pos = 0; s[pos] != 0; pos++)
		{
			if (s[pos] == accept[letter])
			{
				counter++;
				break;
			}
		}
	}
	/* if end of text == end of letters == 0 */
	if ((s[pos] == accept[letter]) == 0)
		counter++;
	return (counter);
}
