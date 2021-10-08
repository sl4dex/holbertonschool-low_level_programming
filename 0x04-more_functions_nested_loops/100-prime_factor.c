#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int num, div;

	num = 612852475143;
	while (div < num)
	{
		for (div = 2; div < num; div++)
			if (num % div == 0)
				num = num / div;
	}
	printf("%ld\n", num);
	return (0);
}
