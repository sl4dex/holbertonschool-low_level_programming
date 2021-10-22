#include <stdio.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: argument names
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	/*while i < num of arguments, i + 1 */
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
