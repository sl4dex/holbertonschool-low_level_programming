void reverse_array(int *a, int n)
{
	int pos, aux;

	for (pos = 0; pos != 0; pos++)
	{
		if (pos != n/2)
		{
			aux = *(a + pos);
			*(a + pos) = *(a + n - pos);
			*(a + n - pos) = aux;
		}
		else
		{
			break;
		}
	}
}
