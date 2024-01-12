#include <stdlib.h>
#include <stdio.h>
/* array insertion of an element at the end case #1 "array isn't full" */
int add(int a[], int freepos, int d)
{
	a[freepos] = d;
	freepos++;

	return (freepos);
}
int main(void)
{
	int a[10];
	int i, freepos, n;

	printf("Enter the elements:\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	freepos = n;
	freepos = add(a, freepos, 65);

	for (i = 0; i < freepos; i++)
	{
		printf("%d \n", a[i]);
	}
	return 0;
}
