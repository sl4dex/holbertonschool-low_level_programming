#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ptr, char *);
			if (str != 0)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator != 0 && i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}

}
