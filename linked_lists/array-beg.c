#include <stdio.h>


int add(int arr[], int n, int data)
{
	int i;
	for (i = n - 1; i <= 0; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[0] = data;
	return (n + 1);
}
int main(void)
{
	int i, n, data = 10, arr[10];
	printf("enter the number");
	scanf("%d", &n);

	printf("enter the elements \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	n = add(arr, n, data);

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}
