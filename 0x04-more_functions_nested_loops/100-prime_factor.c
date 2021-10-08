#include <stdio.h>
#include <math.h>

int main() {
	long int num, maxF, i;
	num = 612852475143;

	
	while(num % 2 == 0)
	{
		num = num / 2;
		maxF = 2;
	}
	if (num % 3 == 0)
	{
		for(i = 3; i <= sqrt(num); i++)
			{
				if (num % i == 0)
				{
				num = num / i;
				maxF = i;
				}
			}
			printf("%ld\n", maxF);
   	}
	return 0;
}
