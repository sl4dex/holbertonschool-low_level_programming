/**
 * swap_int - swaps the values of two integers.
 * @a: first int
 * @b: second int
 *
 */
void swap_int(int *a, int *b)
{
	int alpha, beta;

	alpha = *a;
	beta = *b;
	*a = beta;
	*b = alpha;

}
