#include <stdio.h>

int main() {
	unsigned int num, maxF;
	num = 612852475143;
	unsigned int div = 2;
	unsigned int ans = 0, maxF;

	while (num! = 0)
	{
		if(num % div != 0)
			div += div;
		else
		{
			maxF = num;
			num = num / div;
			if (num == 1)
			{
				printf("%d\n", maxF);
				ans = 1;
				break;
			}
		}
   }
   return 0;
}
