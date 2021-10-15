#include "main.h"

void reverse_array(int *a, int n)
{
	int pos, aux;
	/* pasamos de nro bytes a numero de elementos ( leer sizeof() ) */
	printf("%d and %d\n", n, n/2);
	for (pos = 0; pos < n; pos++)
	{
		if (pos != n / 2)
		{
			aux = *(a + pos);
			*(a + pos) = *(a + n - 1 - pos);
			*(a + n - 1 - pos) = aux;
		}
		else
		{
			break;
		}
	}
}
