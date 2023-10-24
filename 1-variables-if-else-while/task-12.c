#include <stdio.h>

int main(void)
{
	int d1, d2, d3;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (d2 = 0; d2 <= 9; d2++)
		{
			for (d3 = 0; d3 <= 9; d3++)
			{
				if (d1 != d2 &&
					d1 < d2 &&
					d2 != d3 &&
					d2 < d3)
				{
					putchar(d1 + 48);
					putchar(d2 + 48);
					putchar(d3 + 48);

					if (d1 + d2 + d3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
