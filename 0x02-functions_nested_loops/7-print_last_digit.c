/**
 * print_last_digit - Prints the last digit of an integer number
 * @n: The number that we are going to substract its first number
 *
 * Return: The last number of the number
 */
int print_last_digit(int n)
{
	int lastd;
	int truquito = 0;

	lastd = n % 10;
	truquito = lastd * 10 + lastd;
	return (truquito);
}
