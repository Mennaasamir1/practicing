#include <stdio.h>

int end(int arr[], int b[], int data, int n, int freepos)
{
	int i;
	for (i = 0; i < n; i++)
	{
		b[i] = arr[i];
	}
	b[freepos] = data;
	freepos++;
	return freepos;
}

int main(void)
{
	int arr[3];
	int n, i, freepos, size;

	printf("Enter the elements\n");
	scanf("%d\n", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	size = sizeof(arr) / sizeof(arr[0]);
	freepos = n;
	if (n == size)
	{
		int b[size + 2];
		freepos = end(arr, b, freepos, size, 100);
		for(i = 0; i < freepos - 1 ; i++)
		{
			printf("%d", b[i]);
		}
	}
	return 0;
}
