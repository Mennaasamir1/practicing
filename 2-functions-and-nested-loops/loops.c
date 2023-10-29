#include <stdio.h>

int main(void)
{
	int rows, i, j;
	int n = 5;
	
	for (rows = 0; rows < n; rows++)
	{
		for (i = 0; i < n; i++)
		{
			if (rows > 0 && rows < n - 1
				&& i > 0 && i < n - 1)
			{
				printf("  ");
			}
			else
				printf("* ");
		}
		printf("\n");
	}
	return (0);
}
