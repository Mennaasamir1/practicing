#include <stdio.h>
/**
* main - entry point
* Return: always 0 on success
*/
int main(void)
{
	int i, n = 1;

	for (i = 0; i <= 20; i++)
	{
		if (i == n)
		{
			n = n + 2;
			continue;
		}

		printf("%d\n", i);
	}
	return (0);
}
