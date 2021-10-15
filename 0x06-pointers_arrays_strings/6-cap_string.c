#include "main.h"

char *cap_string(char *a)
{
	int pos;

	for (pos = 0; a[pos] != 0; pos++)
	{
		if (a[pos] >= 97 && a[pos] <= 122)
		{
			/* if last pos == tab, space ! " ( ) , . ; ? { } */
			if (*(a + pos - 1) == 9 ||  *(a + pos - 1) == 10 ||
			*(a + pos - 1) == 32 ||
			*(a + pos - 1) == 33 || *(a + pos - 1) == 34 ||
			*(a + pos - 1) == 40 || *(a + pos - 1) == 41 ||
			*(a + pos - 1) == 44 || *(a + pos - 1) == 46 ||
			*(a + pos - 1) == 59 || *(a + pos - 1) == 63 ||
			*(a + pos - 1) == 123 || *(a + pos - 1) == 125)
				a[pos] = a[pos] - 32;
		}
	}
	return (a);
}
