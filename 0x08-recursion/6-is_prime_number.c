/**
 * aux - auxiiar function to is_prime_number()
 * @n: number to check primality
 * @i: counter
 * Return: 1 if prime, 0 otherwise
 */
int aux(int n, int i)
{
	if (i > n)
		return (0);
	/* if its divisible by a number smaller than itself*/
	if (n % i == 0 && i < n)
		return (0);
	if (n % i == 0 && i == n)
		return (1);
	else
		return (aux(n, (i + 1)));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check primality
 *
 * Return: result of aux()
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (aux(n, 2));
}
