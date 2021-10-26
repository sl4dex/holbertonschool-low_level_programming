#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long i, j;
	char *ptr;

	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i <= strlen(s1) - 1; i++)
		ptr[i] = s1[i];
	for (j = 0; j <= strlen(s2) + 1; j++, i++)
		ptr[i] = s2[j];
	return (ptr);
}
