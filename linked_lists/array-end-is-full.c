#include <stdio.h>

/* insertion of an element at the end of an array case #2 "array is full" */
int add(int a[], int b[], int n, int freepos, int data)
{
	int i;
	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	b[freepos] = data;
	freepos++;
	return freepos;
}
int main(void)
{
	int a[3];
	int size = sizeof(a) / sizeof(a[0]);

	int b[size + 2];
	int i, n, freepos;
	printf("enter the number of elements");

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	freepos = n;
	if (n == size)
	{
		freepos = add(a, b, n, freepos, 65);
		for (i = 0; i < freepos; i++)
		{
			printf("%d", a[i]);
		}
	}

	return 0;
}
