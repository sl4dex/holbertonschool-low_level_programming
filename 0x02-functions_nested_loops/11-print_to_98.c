#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: argument that indicates the final number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
		putchar(10);
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
		putchar(10);
	}
}
