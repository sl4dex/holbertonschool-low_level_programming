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
	int num, i, counter;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		num = atoi(argv[1]);
		i = 0;
		counter = 0;
		if (num % coin[i] == 0)
		{
			counter++;
			num -= coin[i];
		}
		else if (num / coin[i] > 0)
		{
			counter++;
			num -= coin[i];
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", counter);
	return (0);
}
