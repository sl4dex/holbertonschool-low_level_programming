/**
 * _islower - checks if a character is in lowercase
 * @c : the character to be checked
 *
 * Return: 1 if the character is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
