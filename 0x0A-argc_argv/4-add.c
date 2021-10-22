#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: num of arguments
 * @argv: argument names
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum1, sum2;

	/*for each argument starting from 1*/
	for (i = 1; i < argc; i++)
	{
		sum1 = 0;
		/* for each character of the argument */
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
				sum1 *= 10;
				sum1 += argv[i][j] - '0';
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum2 += sum1;
	}
	printf("%d\n", sum2);
	return (0);
}
