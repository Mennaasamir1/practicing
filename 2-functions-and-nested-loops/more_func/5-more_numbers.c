#include "main.h"

void more_numbers(void)
{
	int i, j, sec;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			sec = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				sec = j % 10;
			}
			
			_putchar(sec + '0');
			
		}
		_putchar('\n');
	}
}

