#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				putchar(' ');
			continue;
		}
		else
			{
			printf("%d", i);
			if (i != 100)
				putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
