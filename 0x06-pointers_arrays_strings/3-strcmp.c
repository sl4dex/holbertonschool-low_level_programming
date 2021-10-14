#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int one, two, result;

	result = 15;
	for (one = 0; s1[one] != 0; one++)
	{
	}
	for (two = 0; s2[two] != 0; two++)
	{
	}
	if (one > two)
		return (result);
	else if (one < two)
	{
		result = -result;
		return (result);
	}
	else
		return (0);
}
