/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: text to analyze
 * @accept: letters that the program likes c:
 *
 * Return: pointer to matched string
 */
char *_strpbrk(char *s, char *accept)
{
	int letter, pos, match;

	/* for every letter in the text */
	for (pos = 0; s[pos] != 0; pos++)
	{
		/* for every letter in accept string */
		for (letter = 0; accept[letter] != 0; letter++)
		{
			/* if letter in text matches letter in accept */
			if (s[pos] == accept[letter])
			{
				/* return pointer and remember match */
				s = &s[pos];
				match = 1;
				break;
			}
		}
		if (match == 1)
			break;
	}
	return (s);
}
