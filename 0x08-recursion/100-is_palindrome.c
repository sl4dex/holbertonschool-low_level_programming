/**
 * aux1 - compares string letters with recursion
 * @s: beginning string
 * @z: end of string
 * Return: 1 if palindrome, 0 otherwise
 */
int aux1(char *s, char *z)
{
	if (s == z || z < s)
		return (1);
	else if (*s == *z)
		return (aux1(s + 1, z - 1));
	return (0);
}
/**
 * sizestr - returns size of string
 * @s: pointer to beginning of string
 * Return: size of string
 */
char *sizestr(char *s)
{
	/* if end of string not reached */
	if (*s != 0)
	{
	/* advance one*/
	return (sizestr(s + 1));
	}
	else
	{
	/* if end of string, return end of string before \0 */
	return (s - 1);
	}
}
/**
* is_palindrome - checks if string is palindrome
* @s: pointer to the beginning of string
* Return: 1 if palinfrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	char *z;

	if (*s == 0)
		return (0);
	/*end of string (right before \0) */
	z = sizestr(s);
	return (aux1(s, z));
}
