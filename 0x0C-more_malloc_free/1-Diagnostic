#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	if (s1 == NULL && s2 == NULL)
	{
		p = malloc(0);
		return (p);
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*if n bigger than s2 length then set it to s2 length */
	if (n > strlen(s2))
		n = strlen(s2);
	/* s1 length + num of chars in s2 + \0 */
	p = malloc(sizeof(s1) + n);
	if (!p)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		p[i] = s1[i];
		printf("%d.", i);
	}
		printf("%d.", i);
	for (j = 0; j < n; j++, i++)
	{
		p[i] = s2[j];
		printf("%d ", j);
	}
		printf("%d ", j);
	p[i] = '-';
	return (p);
}
