/**
 * factorial - returns the factorial of a given number.
 * @n: number to factorialize
 *
 * Return: factorial of n, -1 if n is a negative number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
