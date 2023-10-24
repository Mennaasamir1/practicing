#include <stdio.h>

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			if ((digit1 != digit2) && (digit1 < digit2))
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);

				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
