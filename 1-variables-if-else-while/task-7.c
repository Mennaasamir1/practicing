#include <stdio.h>
/**
* main - entry point
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0'); /* to convert it from char to int */
	}

	putchar('\n');
	return (0);
}
