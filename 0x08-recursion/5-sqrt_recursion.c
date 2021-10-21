/**
* aux - auxiliar to _sqrt_recursion()
* @n: square root to find
* @i: counter
*
* Return: square root of n
*/
int aux(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (aux(n, (i + 1)));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: square root to find
 *
 * Return: result of aux function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (aux(n, 0));
}
