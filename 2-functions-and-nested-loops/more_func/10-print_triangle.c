#include "main.h"

 void print_triangle(int size)
 {
	int rows, col, space;
	
	if (size <= 0)
		_putchar('\n');

	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (space = size; space > rows; space--)
			{
				_putchar(' ');
			}

			for (col = 1; col <= rows; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
 }
