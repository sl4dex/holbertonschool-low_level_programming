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
	int i, sum;

	if (argc < 2)
		return 0;
	else
	{
		/*for each argument starting from 1*/
		for(i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
			printf("%d\n", sum);
	}
		return (0);
}
