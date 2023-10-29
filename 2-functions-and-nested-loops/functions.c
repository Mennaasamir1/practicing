#include <stdio.h>
char func(int, int);

int main(void)
{
	int m, n, sum;
	m = 50, n = 30;
	sum = func(m, n);

	printf("m = %d and n = %d\n", m, n);
	return (0);
}

char func(int a, int b)
{
	a = 30;
	b = 50;
}
