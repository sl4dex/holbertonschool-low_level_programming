#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int unlock;

	for (i = 0; i <= 9; i++)
	{
		unlock = 0;
		for (j = 0; j <= 9; j++)
		{
			if (i != j && unlock == 1)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
			if (i == j)
			{
				unlock = 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
