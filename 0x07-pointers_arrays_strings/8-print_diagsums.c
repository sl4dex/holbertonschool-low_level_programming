#include <stdio.h>
/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of ints
 * @a: 2d array
 * @size: size of matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int row, col, diag1, diag2, i;

	i=0;
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			printf("a[%d][%d] = %d\n", row, col, a[i]);
			if (row == col)
				diag1 += a[i];
			else if (row + col == size - 1)
			{
				diag2 += a[i];
				 printf("sum = %d\n", diag1);
			}
				 i++;
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
