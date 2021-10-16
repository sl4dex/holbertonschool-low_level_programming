#include "main.h"

/**
 * reverse_array - check the code
 * @a: array to reverse
 * @n: array size
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int pos, aux;

	/* pasamos de nro bytes a numero de elementos ( leer sizeof() ) */
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
