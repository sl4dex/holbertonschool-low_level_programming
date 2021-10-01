#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		/* '0'+ int is a clever way to convert int (an integer) to its ASCII representation/char (a character)*/
		putchar(i+'0');
		/**
		 * in this loop for example:
		 *	i = 0 -> i+'0' = 0 + 48 = ASCII 48 = '0'
		 *	i = 1 -> i+'0' = 1 + 48 = ASCII 49 = '1'
		 *	i = 2 -> i+'0' = 2 + 48 = ASCII 50 = '2'  and so on...
		 */
	putchar('\n');
	return (0);
}
