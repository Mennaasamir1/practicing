#include "stdio.h"

int main(void)
{
	long int div, largest = 0;
	long int  n = 612852475143;

	for (div = 2; div <= n; div++)
	{
		while (n % div == 0)
		{
			largest = div;
			n /= div;
		}
	}

	printf("%ld\n", largest);

	return 0;
}


