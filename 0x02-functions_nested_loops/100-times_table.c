void print_times_table(int n)
{
	int col, row, i, j, k;

	if (n >= 0 || n <= 15)
	{
		for (col = 0; col < n; col++)
		{
			for (row = 0; row < n; row++)
			{
				result = row * col;
				if (result <= 9)
   				{
				if (row >= 1)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + result);
				if (row < n)
				{
					_putchar(',');
				}
			}
			else if (result >= 10)
			{
				i = result / 10;
				j = result % 10;
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i);
				_putchar('0' + j);
				if (row < 9)
				{
					_putchar(',');
				}
			}
				else
				{
				i = result / 10;
				j = result / 10;
				k = result % 10;

				}
			}
		}
	}
}
