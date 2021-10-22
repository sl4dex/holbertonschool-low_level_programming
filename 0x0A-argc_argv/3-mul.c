#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: argument names
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
