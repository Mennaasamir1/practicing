#include "main.h"

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (((num / 10) + 48) > 0)
	{
		_putchar((num / 10) + '0');

	_putchar((num % 10) + '0');
	}

}
